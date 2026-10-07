#include <iostream>
using namespace std;

/*01全局区*/
//全局变量
int g_a = 10;
int g_b = 92;
//静态变量（可在函数外，也可定义在函数内，反正都在全局）
static int s_a = 23;
static int s_b = 423;
//字符串常量（例子设在main里）
//全局常量
const int c_g_a = 43;
const int c_g_b = 543;


int main013() {
	/*
	内存分为四区
	代码区：以机器码存储在CPU之中，代码区具有共享（只保存一份代码，对于频繁执行的程序，通过共享可以减少资源浪费）和只读（不能修改）的特性
	全局区：存放全局变量，静态变量，常量（全局常量和字符串常量）
	栈区：由编译器管理和释放，存放局部变量和局部常量，结束生命周期时由编译器自动释放
	堆区：由程序员管理开辟（new）和释放（delete），若没有释放，则由操作系统回收
	程序运行前只有代码区和全局区
	*/
	
	/*01-全局区测试*/
	cout << "地址测试" << endl;
	cout << "&g_a = " << (int) & g_a << " ";
	cout << "&g_b = " << (int) & g_b << endl;
	cout << "&s_a = " << (int)&s_a << " ";
	cout << "&s_b = " << (int)&s_b << endl;
	cout << "字符串 = " << (int)&"hello" << endl;
	cout << "&c_g_a = " << (int)&c_g_a << " ";
	cout << "&c_g_b = " << (int)&c_g_b << endl;

	/*02-局部区测试*/
	//局部变量
	int j_a = 42;
	int j_b = 422;
	//局部常量
	const int c_j_a = 97;
	const int c_j_b = 10;

	cout << "&j_a = " << (int)&j_a << " ";
	cout << "&j_b = " << (int)&j_b << endl;
	cout << "&c_j_a = " << (int)&c_j_a << " ";
	cout << "&c_j_b = " << (int)&c_j_b << endl;

	return 0;
}