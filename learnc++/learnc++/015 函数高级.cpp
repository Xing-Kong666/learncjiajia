#include <iostream>
using namespace std;

/*01默认参数*/
void func(int a = 10) {
	cout << "默认参数 a = " <<a<< endl;
}
//如果当前参数有了默认值，则其后面的参数也应有默认值，否则会错误
void func(int a, int b) {
	cout << "a = " << a << " " << "b = " << b << endl;
}

/*02占位参数*/
void funcc(int a, int = 10) {
	cout << "调用的为占位参数所在函数" << endl;
}

/*03函数重载*/
//条件：同一作用域+函数名+以及 函数参数的个数/参数的类型/参数位置 的改变
void init(int a) {
	cout << "重载前的函数 a = " << a << endl;
}
void init(int a, double b) {
	cout << "个数重载 a = " << a << " " << "b = " << b << endl;
}
void init(double a) {
	cout << "类型重载 a = " << a << endl;
}
void init(double b, int a) {
	cout << "位置重载（包含个数重载）b = " << b << " " << "a = " << a << endl;
}
//默认参数可以不传递实参，但如果调用该函数时传递一个int值，则会与原始函数产生二义性
//void init(int = 2) {
//	
//}
//引用类型的函数重载
void init1(int& a) {
	cout << "类型为引用，可以更改 a =" <<a<< endl;
}
void init1(const int& a) {
	cout << "类型重载为常量引用 a =" <<a<< endl;
}
int main() {
	cout << "默认参数测试：" << endl;
	func();
	cout << endl;
	func(12,32);
	cout << endl;
	cout << "占位参数测试：" << endl;
	funcc(23,2339);
	cout <<endl<< "函数重载测试：" << endl;
	cout << "原始函数" << " ";
	int a = 24;
	init(a);
	cout << endl << "个数重载" << " ";
	init(23,42.49);
	cout << endl << "类型重载" << " ";
	init(23.42);
	cout << endl << "位置重载" << " ";
	init(323.42, 23);

	cout <<endl<< "引用重载测试" << " ";
	int b = 23;
	//传递变量默认认为是int&a类型
	init1(b);
	cout <<endl<< "数字常量引用重载测试" << endl;
	init(232);
	cout << endl << "常量引用重载测试" << " ";
	const int c = 23;
	init1(c);
	system("pause");
	return 0;
}