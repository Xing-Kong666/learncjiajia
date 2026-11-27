#include <iostream>
using namespace std;
#include <string>

//string& operator=(const char* s);//char* 赋值
//string& operator=(const string& s);//string 赋值
//string& operator=(char c);//单个字符赋值
//string& assign(const char* s);//char* 赋值
//string& assign(const char* s,int n);//char* 的前n个字符赋值
//string& assign(const string& s);//string赋值
//string& assign(int n,char c);//n个相同单字符赋值
void test02() {
	string st1;
	st1 = "char*";
	cout <<"st1 = " << st1 << endl;

	string st2;
	st2 = st1;
	cout << "st2 = " << st2 << endl;

	string st3 = st2;
	st3 = 'c';
	cout << "st3 = " << st3 << endl;

	string st4;
	st4.assign("大吉大利");
	cout << "st4 = " << st4 << endl;

	string st5;
	st5.assign(st4);
	cout << "st5 = " << st5 << endl;

	string st6;
	st6.assign("welcome to C++",7);
	cout << "st6 = " << st6 << endl;

	string st7;
	st7.assign(7, 'a');
	cout << "st7= " << st7 << endl;

}
int main02() {
	test02();
	system("pause");
	return 0;
}