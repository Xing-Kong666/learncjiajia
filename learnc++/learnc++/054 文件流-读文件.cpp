#include <iostream>
using namespace std;
#include <fstream>
#include <string>

int main054() {
	//引入头文件
	
	//创建流对象
	ifstream ifs;

	//打开文件
	ifs.open("../files for procedure/test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return -1;
	}
	//读文件
	//1，会损失格式
	//char buf[1024] = { 0 };
	//ifs >> buf;
	//cout << buf << endl;
	//ifs >> buf;
	//cout << buf;
	
	//2
	//char buf[1024] = { 0 };
	//ifs.getline(buf, sizeof(buf));
	//cout << buf;
	//ifs.getline(buf, sizeof(buf));
	//cout << buf;
	
	// 3
	//注意是string不是char[]
	string buf;
	while (getline(ifs, buf)) {
		cout << buf << endl;
	}
	
	//4，时间较长，格式不丢失
	//char c;
	//while ((c = ifs.get()) != EOF) {
	//	cout << c;
	//}
	
	//关闭文件
	ifs.close();
	system("pause");
	return 0;
}
