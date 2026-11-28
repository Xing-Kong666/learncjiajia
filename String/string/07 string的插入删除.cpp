#include <iostream>
using namespace std;
#include <string>

//string& insert(int pos, const char* s);//从第pos下标位置插入字符串
//string& insert(int pos, const string& str);
//string& insert(int pos, int n, char c);//插入n个c
//string& erase(int pos, int n = npos);//从第pos个位置开始删除n个字符
void test07() {
	string st1 = "lear C++";
	string st2 = "n";
	cout << "st1 = " << st1.insert(4, st2) << endl;
	cout << "st1 = " << st1.insert(0, "I ") << endl;
	cout << "st1 = " << st1.insert(0, 2, 'a') << endl;

	cout << "st1 = " << st1.erase(0, 2) << endl;
}
int main07() {
	test07();
	system("pause");
	return 0;
}