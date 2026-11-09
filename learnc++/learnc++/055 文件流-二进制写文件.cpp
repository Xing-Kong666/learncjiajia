#include <iostream>
using namespace std;
#include <fstream>

int main055() {
	//引入头文件

	//创建流对象
	ofstream ofs;

	//打开文件
	ofs.open("../files for procedure/binarytest.txt", ios::out | ios::binary);

	//写入文件
	const char* p = "欢迎来到c++的世界,welcome to the world of c++.桀桀桀";
	//cout << p;
	ofs.write(p, strlen(p));

	//关闭文件
	ofs.close();

	system("pause");
	return 0;
}