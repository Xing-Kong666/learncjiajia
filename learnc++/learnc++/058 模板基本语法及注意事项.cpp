#include <iostream>
using namespace std;

//基本结构
//template<typename T>,typename 意为T为通用数据类型模版，template 为模版关键字，T可更换为其他内容，一般为大写字母
//告诉编译器后面紧跟的T不要报错，它是通用数据类型
template<typename T>
void swapdata(T &a,T &b) {
	T temp = a;
	a = b;
	b = temp;
}
//写typename表示的是数据类型，class表示的是类，class更通用一些
template<class T>
void func() {
	cout << "func函数的调用" << endl;
}
void test058() {
	int a = 423;
	int b = 582;
	char e = 'e';
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "e = " << e << endl;
	//模版调用方式
	//1.自动类型转换
	swapdata(a, b);
	//swapdata(a, e);注意1:模板必须推导出来一致的类型才能使用
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//2.显示指定类型
	double c = 28.52;
	double d = 32.73;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	swapdata<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	//注意2:模板必须能推导出T的类型才能使用
	func<int>();
	//func();
}
int main058() {
	test058();
	system("pause");
	return 0;
}