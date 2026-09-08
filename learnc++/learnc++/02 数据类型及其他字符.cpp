#include <iostream>
using namespace std;

int main() {
	/*整型*/
	/*短整型short，整型int，长整型long，长长整型long long*/
	int a = 193;
	short b = 12;
	long c = 232;
	long long d = 3232424;
	cout << "a= " << a << endl;
	cout << "int的字节=  " << sizeof(int) << endl;
	cout << "b= " << b << endl;
	cout << "short的字节=  " << sizeof(short) << endl;
	cout << "c= " << c << endl;
	cout << "long的字节=  " << sizeof(long) << endl;
	cout << "d= " << d << endl;
	cout << "long long的字节=  " << sizeof(long long) << endl;
	/*实型(浮点型)*/
	/*单精度float7位有效数字，从整数位开始算，双精度double15-16位*/
	/*最多显示6位有效数字，可以更改*/
	float e = 1.32f;//默认读取为双精度，不加f会多一步转换
	cout << "e= " << e << endl;
	cout << "float字节= " << sizeof(float) << endl;
	double f = 1.3652442;
	cout << "f= " << f << endl;
	cout << "double的字节= " << sizeof(double) << endl;
	/*字符型*/
	/*char,内存中以ASCII码值存放*/
	char g = 'a';
	cout << "g= " << g << endl;
	cout << "g的ascii码= " << (int)g << endl;
	cout << "char的字节= " << sizeof(char) << endl;
	/*sizeof为字节计算函数*/
	/*科学计数法*/
	int h = 4e2;
	float i = 4e-2;
	cout << "h= " << h << "i= " << i << endl;
	/*转义字符*/
	/* \n换行，\t水平制表，默认为8位，\\为单个反斜线，\"和\'为引号，等等*/
	cout << "hello\nworld\n";//endl为换行加刷新缓冲区
	cout << "hello\tworld"<<endl;
	system("pause");
	return 0;
}