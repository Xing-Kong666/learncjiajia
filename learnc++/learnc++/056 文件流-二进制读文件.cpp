#include <iostream>
using namespace std;
#include <fstream>

int main056() {
	//引入头文件

	//创建流对象，初始化的时候已打开
	ifstream ifs("../files for procedure/binarytest.txt", ios::in | ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return -1;
	}
	//读取文件
	char p[1024] = { 0 };
	ifs.read(p, sizeof(p));
	cout << p;
	

	//关闭文件
	ifs.close();
	system("pause");
	return 0;
}