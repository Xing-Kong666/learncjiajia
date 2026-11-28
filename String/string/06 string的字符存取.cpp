#include <iostream>
using namespace std;
#include <string>

//char& operator[](int n);//中括号访问
//char& at(int n);//函数访问
void test06() {
	string st1 = "string";
	cout << "第2个字符为" << st1[1] << endl;
	cout << "第三个字符为" << st1.at(2) << endl;

	st1[1] = 'a';
	st1.at(2) = 'b';
	cout << "修改后" << endl;
	cout << "第2个字符为" << st1[1] << endl;
	cout << "第三个字符为" << st1.at(2) << endl;
}
int main06() {
	test06();
	system("pause");
	return 0;
}