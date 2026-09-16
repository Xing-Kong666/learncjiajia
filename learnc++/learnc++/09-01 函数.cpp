#include <iostream>
#include "09 函数.h"
using namespace std;

/*04函数的声明，主要用于在主函数main之后定义的函数需要声明*/
void h1();
void h2(int a);
int h3();
int h4(int a);
//计算两数的最大公约数（辗转相除法）
int gcd(int a, int b) {
	while (a % b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return b;
}
/*05函数的三种传参类型*/
//值传递，指针（地址）传递，引用传递
int h5(int a) {
	cout << "该函数为值传递" << endl;
	cout << "值传递只将实参的值赋值给形参，相当于又开了一块临时空间拷贝这个值" << endl;
	cout << "值传递的值为：" << a << endl;
	return 0;
}
int h6(int* a) {
	cout << "该函数为指针传递" << endl;
	cout << "若实参为变量地址，指针能对所指变量进行值的修改/若实参为指针，只能修改实参对应的变量的值" << endl;
	*a = 23;
	return 0;
}
//(int *&a)
int h7(int &a) {
	cout << "该函数为引用传递" << endl;
	cout << "引用传递直接对所传的实参本身进行操作，若为变量，则可修改其值，若为指针，则可改变其指向以及其指向变量的值" << endl;
	a = 9;
	return 0;
}
int main() {
	/*01函数的定义*/
	/*
	返回值类型 函数名（参数列表（形参，具有生命周期，调用完函数就失效））{
	  具体函数体语句
	  返回值（return 返回值;or return; ）
	}
	*/
	int a = 39, b = 9;
	/*02调用函数*/
	/*
	函数名（参数列表（实参））
	*/
	int c=gcd(a, b);
	cout << "a39和b9的最大公约数为：" << c << endl;
	h1();
	h2(4);
	int e1=h3();
	cout << "返回值为：" << e1 << endl;
	int e2 = h4(9);
	cout << "返回值为：" << e2 << endl;

	h5(2);
	int e3 = 39;
	h6(&e3);
	cout << "e3 = " << e3 << endl;
	int e4 = 5;
	h7(e4);
	cout << "e4 = " << e4 << endl;
	/*06函数的分文件编写*/
	/*
	1、函数的声明写在头文件里
	2、函数的定义写在源文件里（开始引用定义的头文件，输入输出流头文件可以在源文件里引用也可写到头文件里）
	*/
	swap(9, 7);
	system("pause");
	return 0;
}
/*03函数的四种常见类型*/
void h1() {
	cout << "无返无参函数" << endl;
}
void h2(int a) {
	cout << "无返有参函数，打印传递值a = " << a << endl;
}
int h3() {
	cout << "有返无参函数,返回变量a" << endl;
	int a = 666;
	return a;
}
int h4(int a) {
	cout << "有返有参函数，对参数处理进行返回" << endl;
	a++;
	return a;
}