#include <iostream>
using namespace std;

//计算两数的最大公约数（辗转相除法）
int gcd(int a, int b) {
	while (a % b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return b;
}
int main() {
	/*01函数的定义*/
	/*
	返回值类型 函数名（参数列表（形参））{
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
	system("pause");
	return 0;
}