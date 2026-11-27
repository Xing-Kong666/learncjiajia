#include <iostream>
using namespace std;
#include <string>

//string();//无参构造
//string(const char* s);//char* 字面量初始化
//string(const string& s);//string 字面量初始化
//string(int n, char c);//目标赋值为n个字符c
void test01() {
	string ex1;
	ex1 = "hello";
	string ex2("hello string");
	string ex3(ex2);
	string ex4(8, 'e');
	cout <<"ex1 = " << ex1 << endl;
	cout <<"ex2 = " << ex2 << endl;
	cout <<"ex3 = " << ex3 << endl;
	cout <<"ex4 = " << ex4 << endl;
}
int main01() {
	test01();
	system("pause");
	return 0;
}