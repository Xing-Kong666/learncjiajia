#include "057-workermanege.h"
#include "057-employee.h"
#include "057-manager.h"
#include "057-worker.h"
#include "057-boss.h"
#include <fstream>

//展示菜单、显示职工、退出
void workermanage::ShowMenu() {
	cout << "************************************************" << endl;
	cout << "*****************职工管理系统*****************" << endl;
	cout << "****************0:退出职工系统****************" << endl;
	cout << "****************1:添加新的职工****************" << endl;
	cout << "****************2:显示职工信息****************" << endl;
	cout << "****************3:删除职工信息****************" << endl;
	cout << "****************4:修改职工信息****************" << endl;
	cout << "****************5:查找职工信息****************" << endl;
	cout << "****************6:职工信息排序****************" << endl;
	cout << "****************7:清空职工信息****************" << endl;
	cout << endl;
}
void workermanage::DisplayEmp() {
	if (this->per == NULL) {
		cout << "文件为空或不存在" << endl;
	}
	else {
		for (int i = 0; i < curnum; i++) {
			per[i]->ShowInfo();
		}
	}
	system("pause");
	system("cls");
}
void workermanage::ExitInterface() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}


//写入文件与编号查重，添加职工
void workermanage::WriteFile() {
	ofstream ofs;
	ofs.open(FILEPOS, ios::out);
	for (int i = 0; i < curnum; i++) {
		ofs << per[i]->m_id << " ";
		ofs << per[i]->m_name << " ";
		ofs << per[i]->posid << endl;
	}
	ofs.close();
}
bool workermanage::SeekRepeat(worker** nowarray, int length, int id) {
	bool ret = false;//默认不存在
	for (int i = 0; i < length; i++) {
		if (nowarray[i]->m_id == id) {
			ret = true;
			break;
		}
	}
	return ret;
}
void workermanage::AddPesonnal() {
	cout << "请输入您要添加的职工数" << endl;
	//输入职工数
	int length;
	cin >> length;

	//开辟新数组接收，长度应为原长度加新长度
	int nownum = this->curnum + length;
	worker** newper = new worker * [nownum];
	//将原数据保存至新数组
	for (int i = 0; i < this->curnum; i++) {
		newper[i] = per[i];
	}
	//保存完之后释放原空间
	delete[]per;
	per = NULL;
	//依据输入存入新数据
	for (int i = 0; i < length; i++) {
		int id;
		string name;
		int pid;
		worker* worker = NULL;
		while (1) {
			cout << "请输入第" << i + 1 << "个职工的id" << endl;
			cin >> id;
			bool ret = SeekRepeat(newper,curnum+i,id);//传入新数组实时监测重复情况，传入长度体现动态性
			if (ret) {
				cout << "职工编号重复，请重新输入！" << endl;
			}
			else break;
		}
		cout << "请输入第" << i+1 << "个职工的姓名" << endl;
		cin >> name;
		cout << "请输入第" << i+1 << "个职工的职位id" << endl;
		cout << "1.员工";
		cout << "\t2.经理";
		cout << "\t3.老板" << endl;
		cin >> pid;
		//判断输入的职位id是否正确，1为正确，0为错误
		int flag = 1;
		while (1) {
			switch (pid) {
			case 1:
				flag = 1;
				worker = new employee(id, name, 1);
				break;
			case 2:
				flag = 1;
				worker = new manager(id, name, 2);
				break;
			case 3:
				flag = 1;
				worker = new boss(id, name, 3);
				break;
			default:
				flag = 0;
				cout << "请重新输入职位id" << endl;
				cin >> pid;
				break;
			}
			if (flag)break;
		}
		newper[this->curnum + i] = worker;
	}
	//更新现在值
	this->curnum = nownum;
	per = newper;
	//在文件末尾追加，防止覆盖
	WriteFile();
	cout << "恭喜您成功添加了 " << length << " 名职工" << endl;
	system("pause");
	system("cls");
}


//读文件时获取当前长度
int workermanage::GetNum() {
	ifstream ifs;
	ifs.open(FILEPOS, ios::in);
	int num = 0;
	int id;
	string name;
	int pid;
	while (ifs >> id && ifs >> name && ifs >> pid) {
		num++;
	}
	ifs.close();
	return num;
}


//判断职工是否存在及删除
int workermanage::IsExist(int id) {
	int end = -1;
	for (int i = 0; i < curnum; i++) {
		if (per[i]->m_id == id) {
			end = i;
			break;
		}
	}
	return end;
}
void workermanage::DeleteEmp() {
	if (per == NULL) {
		cout << "文件不存在或为空" << endl;
	}
	else {
		int id;
		cout << "请输入删除的职工id:";
		cin >> id;
		int index = IsExist(id);
		if (index != -1) {
			for (int i = index; i < curnum - 1; i++) {
				per[i] = per[i + 1];
			}
			curnum--;
			cout << "删除成功" << endl;
			WriteFile();
		}
		else { 
			cout << "删除失败，该职工不存在" << endl;
		}
	}
	system("pause");
	system("cls");
}
//修改职工信息
void workermanage::ModifyEmp() {
	if (per == NULL) {
		cout << "文件不存在或为空" << endl;
	}
	else {
		cout << "请输入您要修改职工编号:";
		int id;
		cin >> id;
		int end;
		end = IsExist(id);
		if (end != -1) {
			delete per[end];
			cout << "查找成功，请输入新的信息" << endl;
			int newid;
			string newname;
			int newpid;

			cout << "新的职工编号:";
			cin >> newid;
			cout << "新的姓名:";
			cin >> newname;
			cout << "新的职务编号:";
			cin >> newpid;
			
			worker* worker = NULL;
			switch (newpid) {
			case 1:
				worker = new employee(newid, newname, 1);
				break;
			case 2:
				worker = new manager(newid, newname, 2);
				break;
			case 3:
				worker = new boss(newid, newname, 3);
				break;
			}
			per[end] = worker;
			cout << "修改成功" << endl; 
			WriteFile();
		}
		else {
			cout << "修改失败，查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}


//查找职工
void workermanage::SeekEmp() {
	if (per == NULL) {
		cout << "文件不存在或为空" << endl;
	}
	else {
		cout << "请输入查找方式:" << endl;
		cout << "1.按职工编号查找" << endl;
		cout << "2.按姓名查找" << endl;
		int way;
		cin >> way;
		int flag = 0;//flag为变量标记，0为没有找到，1为找到了
		if (way == 1) {
			cout << "请输入您要查找的职工编号:";
			int id;
			cin >> id;
			for (int i = 0; i < curnum; i++) {
				if (per[i]->m_id == id) {
					per[i]->ShowInfo();
					flag = 1;
				}
			}
			if (flag)cout << "查找成功" << endl;
			else {
				cout << "查无此人" << endl;
			}

		}
		else if (way == 2) {
			cout << "请输入您要查找的职工姓名:";
			string name;
			cin >> name;
			for (int i = 0; i < curnum; i++) {
				if (per[i]->m_name == name) {
					per[i]->ShowInfo();
					flag = 1;
				}
			}
			if (flag)cout << "查找成功" << endl;
			else {
				cout << "查无此人" << endl;
			}
		}
	}
	system("pause");
	system("cls");
}


//对职工排序
void workermanage::SortEmp() {
	if (per == NULL) {
		cout << "文件不存在或记录为空" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "请输入排序方式:" << endl;
		cout << "1.职工升序排序（从小到大）" << endl;
		cout << "2.职工降序排序（从大到小）" << endl;
		int select;
		cin >> select;
		for (int i = 0; i < curnum - 1; i++) {
			for (int j = 0; j + 1 < curnum - i; j++) {
				if (select == 1) {
					if (per[j]->m_id > per[j + 1]->m_id) {
						worker* temp = per[j];
						per[j] = per[j + 1];
						per[j + 1] = temp;
					}
				}
				else if(select == 2) {
					if (per[j]->m_id < per[j + 1]->m_id) {
						worker* temp = per[j];
						per[j] = per[j + 1];
						per[j + 1] = temp;
					}
				}
			}
		}
		cout << "排序成功" << endl;
		DisplayEmp();
		WriteFile();
	}
}


//清空职工信息
void workermanage::ClearEmp() {
	if (per == NULL) {
		cout << "文件不存在或记录为空，无法执行清空操作" << endl;
	}
	else {
		cout << "确认清空？" << endl;
		cout << "1.yes 是的是的" << endl;
		cout << "2.nonono 不是不是" << endl;
		int select;
		cin >> select;
		if (select == 1) {
			ofstream ofs;
			//清空文件并重新创建
			ofs.open(FILEPOS, ios::trunc);
			ofs.close();
			for (int i = 0; i < curnum; i++) {
				delete per[i];
				per[i] = NULL;
			}
			delete[]per;
			per = NULL;
			curnum = 0;
			cout << "清空成功" << endl;
		}

	}
	system("pause");
	system("cls");
}


//构造与析构
workermanage::workermanage() {
	ifstream ifs;
	ifs.open(FILEPOS, ios::in);

	//文件不存在
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		this->curnum = 0;
		this->per = NULL;
		return;
	}

	//文件为空
	char eof;
	ifs >> eof;
	//默认不为空返回值为false，读到文件结束符函数返回值变为true
	if (ifs.eof()) {
		cout << "文件为空" << endl;
		this->curnum = 0;
		this->per = NULL;
		//不用了关上
		ifs.close();
		return;
	}
	//不封装初始化则光标位置不在开头，需要重置。封装则会重新打开文件，光标在文件头开始读
	ifs.close();
	ifs.open(FILEPOS, ios::in);
	//文件不为空逐个读取
	int id;
	string name;
	int pid;
	curnum=GetNum();
	per = new worker * [curnum];
	int index=0;
	//当三者都能读取成功时说明这个是一个有效的职工
	while (ifs >> id && ifs >> name && ifs >> pid) {
		worker* worker=NULL;
		switch (pid) {
		case 1:
			worker = new employee(id, name, 1);
			break;
		case 2:
			worker = new manager(id, name, 2);
			break;
		case 3:
			worker = new boss(id, name, 3);
			break;
		}
		per[index++] = worker;
	}
	ifs.close();
}
workermanage::~workermanage(){
	if (this->per != NULL) {
		//释放构一级指针开辟的空间
		for (int i = 0; i < curnum; i++) {
			delete per[i];
			per[i] = NULL;
		}
		//再释放二级指针指向的空间
		delete[]per;
		per = NULL;
	}
}