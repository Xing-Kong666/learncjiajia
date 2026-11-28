#include <iostream>
using namespace std;
#include <string>

//int find(const string&str,int pos=0);//从左（pos）查找，查找str第一次出现的位置，-1则没有
//int find(const char*s ,int pos=0);
//int find(const char* s,int pos,int n);//从pos往右找，找s的前n个字符出现的位置
//int find(const char c,int pos=0);
//int rfind(const string&str,int pos=npos);//从右往左找，找str第一次出现的位置，也就是从左往右的最后一个位置
//int rfind(const char* s,int pos=npos);
//int rfind(const char*s,int pos,int n);//从pos往左找，找s的前n个字符第一次出现的位置，也就是从左往右的最后一个位置
//int rfind(const char c,int pos=0);//找c最后一次出现的位置
//string& replace(int pos,int n,const string& str);//替换从pos开始的位置的n个字符为str，str替换后全存在，不会丢失
//string& replace(int pos,int n,const char* s);
void test04() {
	string st1 = "adeaade";
	cout << "pos = " << st1.find("de") << endl;
	cout << "pos = " << st1.rfind("de") << endl;//从右往左遍历起点，匹配子串内部仍然是局部从左到右逐个配对

	cout << "pos = " << st1.find("e",0,1) << endl;
	cout << "pos = " << st1.rfind("e",6,1) << endl;

	string st2 = "aa";
	cout << "pos = " << st1.find(st2) << endl;
	cout << "pos = " << st1.rfind(st2) << endl;

	string st3 = "66666666666666666666666666666";
	cout << "pos = " << st1.replace(1,2,st3) << endl;
}
int main04() {
	test04();
	system("pause");
	return 0;
}