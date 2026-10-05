#include <iostream>
using namespace std;
#include <conio.h>
#include <string>

#define max 1000
struct person {
	string name;//姓名
	string sex;//性别
	int age;//年龄
	char tele[12];//电话,cin输入默认为字符串，在数组最后补0结束，按tele[i]方式逐一循环输入则为字符数组
	string address;//家庭住址
};
//定义初始目录长度为0
static int length=0;
//定义通讯录数组，new动态开辟，delete删除
person list[max];
//删除修改联系人的共用变量
string goalname;
//查找联系人的手机号
string tele;

//菜单展示
void Menu() {
	cout << "\t通讯录管理系统\t" << endl;
	cout << "欢迎使用通讯录管理系统，请输入对应数字进行相关任务的处理" << endl;
	cout << "\t1.添加联系人" << endl;
	cout << "\t2.删除联系人" << endl;
	cout << "\t3.修改联系人" << endl;
	cout << "\t4.查找联系人" << endl;
	cout << "\t5.清空联系人" << endl;
	cout << "\t6.展示联系人" << endl;
	cout << "\t7.退出系统" << endl << endl;
}
//添加联系人
void Insert(person add[]) {
	cout << "请输入联系人的姓名" << endl;
	cin >> add[length].name;
	cout << "请输入联系人性别" << endl;
	cin >> add[length].sex;
	cout << "请输入联系人年龄" << endl;
	cin >> add[length].age;
	cout << "请输入联系人联系电话" << endl;
	cin >> add[length].tele;
	cout << "请输入联系人家庭住址" << endl;
	cin >> add[length].address;
	length++;
}
//删除联系人
void Delete(person dele[],string name) {
	int i = 0;
	while (dele[i].name!=name&&i<length) {
		i++;
	}
	if (i >= length) {
		cout << "查无此人" << endl;
	}
	else {
		while (i < length - 1) {
			dele[i] = dele[i + 1];
		}
		length--;
	}
	return;
}
//修改联系人
void Change(person chan[],string name) {
	int i = 0;
	while (chan[i].name != name && i < length) {
		i++;
	}
	if (i >= length) {
		cout << "查无此人" << endl;
	}
	else {
		cout << "已为您找到相关联系人" << endl;
		cout << chan[i].name << " ";
		cout << chan[i].sex<< " ";
		cout << chan[i].age << " ";
		cout << chan[i].tele << " ";
		cout << chan[i].address << endl;
		cout << "请输入先关信息做出修改" << endl;
		cout << "依次输入姓名，性别，年龄，电话，家庭住址" << endl;
		cin >> chan[i].name;
		cin >> chan[i].sex;
		cin >> chan[i].age;
		cin >> chan[i].tele;
		cin >> chan[i].address;
		cout << "信息已为您更改完成，下面为修改后的信息" << endl;
		cout << chan[i].name << " ";
		cout << chan[i].sex << " ";
		cout << chan[i].age << " ";
		cout << chan[i].tele << " ";
		cout << chan[i].address << endl;
	}
	return;
}
//查找联系人
void Seek(person seek[],string tele) {
	for (int i = 0; i < length; i++) {
		if (seek[i].tele == tele) {
			cout << "已为您查找到相关联系人" << endl;
			cout << seek[i].name << " ";
			cout << seek[i].sex << " ";
			cout << seek[i].age << " ";
			cout << seek[i].tele << " ";
			cout << seek[i].address << endl;
			return;
		}
	}
	cout << "查无此人" << endl;
}
//清空联系人
void Clear(person clear[]) {
	length = 0;//逻辑清空，物理仍存在
}
//展示联系人
void Show(person show[]) {
	for (int i = 0; i < length; i++) {
		cout << "姓名：" << show[i].name << " ";
		cout << "性别：" << show[i].sex << " ";
		cout << "年龄：" << show[i].age << " ";
		cout << "联系电话：" << show[i].tele << " ";
		cout << "家庭住址：" << show[i].address << endl;
	}
}

int main() {
	//功能调用
	while (1) {
		Menu();
		int choice;
		cin >> choice;
		switch (choice) {
		case 1:
			Insert(list);
			break;
		case 2:
			cout << "请输入删除人的姓名" << endl;
			cin >> goalname;
			Delete(list,goalname);
			system("pause");
			break;
		case 3:
			cout << "请输入修改人的姓名" << endl;
			cin >> goalname;
			Change(list,goalname);
			system("pause");
			break;
		case 4:
			cout << "请输入联系人的手机号" << endl;
			cin >> tele;
			Seek(list,tele);
			system("pause");
			break;
		case 5:
			Clear(list);
			break;
		case 6:
			Show(list);
			system("pause");
			break;
		case 7:
			exit(0);
		}
		//处理上一次功能使用后的屏幕展示信息，增强美观性
		system("cls");
	}
	system("pause");
	return 0;
}