#include <iostream>
using namespace std;
#include <string>

int main() {
	/*整型*/
	int a = 0;
	cout << "请输入整型a的值：" << endl;
	cin >> a;
	cout << "a的值为：" << a << endl;
	cout << "\n";
	/*实型*/
	float f = 2.365f;
	cout << "请输入实型f的值：" << endl;
	cin >> f;
	cout << "f的值为：" << f << endl;
	cout << "\n";
	/*字符型*/
	char ch = 'e';
	cout << "请输入字符型ch的值：" << endl;
	cin >> ch;
	cout << "ch的值为：" << ch << endl;
	cout << "\n";
	/*字符串型*/
	string str = "c++ nb";
	cout << "请输入字符串型str的值：" << endl;
	cin >> str;
	cout << "str的值为：" << str << endl;
	cout << "\n";
	/*bool类型*/
	/*自动忽略小数部分，所有整数部分的非零值均为true*/
	bool b = false;
	cout << "请输入布尔类型b的值：" << endl;
	cin >> b;
	cout << "b的值为：" << b << endl;
	cout << "\n";
	system("pause");
	return 0;
}