#include <iostream>
using namespace std;
#include <string>

//string& operator+=(const char* s);//拼接char*
//string& operator+=(const string& s);//拼接string
//string& operator+=(const char c);//拼接char
//string& append(const char* s);
//string& append(const char* s,int n);//拼接前n个
//string& append(const char* s,int pos,int n);//从下标pos的位置开始拼接n个
//string& append(const string& s);
void test03() {
	string st1 = "learn ";
	st1 += "C++";
	cout << "st1 = " << st1 << endl;

	string st2 = "I ";
	st2 += st1;
	cout << "st2 = " << st2 << endl;

	string st3 = "welcom";
	st3 += 'e';
	cout << "st3 = " << st3 << endl;

	string st4 = "C";
	st4.append("嘎嘎");
	cout << "st4 = " << st4 << endl;

	string st5 = "jav";
	st5.append("tea",2,1);
	cout << "st5 = " << st5 << endl;

	string st6 = "drink";
	st6.append(" tea or coffee", 4);
	cout << "st6 = " << st6 << endl;

	string st7 = "str";
	string st8 = "ing";
	st7.append(st8);
	cout << "st7 = " << st7<< endl;
}
int main03() {
	test03();
	system("pause");
	return 0;
}