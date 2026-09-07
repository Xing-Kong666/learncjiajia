#include <iostream>
using namespace std;
/*1常量*/
#define constant 10
int main() {
	/*1变量*/
	int variable=14;
	cout << "variable= " << variable << endl;
	variable = 17;
	cout << "variable= " << variable << endl;
	/*常量,a不能再修改值，只能为初始值*/
	const int a = 85;
	cout << "a= " << a << endl;
	/*2标识符不能为关键字
	以下划线或字母开头，支持数字，区分大小写
	*/
	int _abc = 56;
	int abc = 62;
	cout << "_abc= " << _abc << "\nabc= " << abc << endl;
	/*3打印样例*/
	cout << "hello c++" << endl;
	/*3暂停函数，防止控制台立即结束进程*/
	system("pause");
	return 0;
}