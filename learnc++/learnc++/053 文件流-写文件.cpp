#include <iostream>
using namespace std;
#include <fstream>
/*
写文件5步操作
1.引入头文件
2.创建流对象
  ofstream 写
  ifstream 读
  fstream 读写
3.打开文件（文件路径，打开方式）
	ios::in	以读取模式打开文件。
	ios::out	以写入模式打开文件。
	ios::app	追加模式，每次写入都定位到文件末尾。
	ios::ate	打开文件后将文件位置定位到末尾，但后续可以重新定位。
	ios::trunc	打开文件时清空已有内容。
	ios::binary	以二进制模式打开文件，避免文本模式下的换行符等转换。
4.写入内容
5.关闭文件
*/
int main053() {
	ofstream ost;
	ost.open("../files for procedure/test.txt", ios::out);
	ost << "这是一个测试" << endl;
	ost << "it's a test of file" << endl;
	ost << "to learn the basic operation of files" << endl;
	ost.close();
	system("pause");
	return 0;
}