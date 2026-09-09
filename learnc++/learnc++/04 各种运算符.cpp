#include <iostream>
using namespace std;

int main() {
	/*01算术运算符*/
	//加减乘除
	int a = 23;
	int b = 332;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	double c = 25.36;
	double d = 2.3;
	cout << "c25.36和d2.3两个小数的相除结果为：" << c / d << endl;
	float e = 0.5;
	float f = 0.25;
	cout << "e0.5和f0.25两个小数的相除结果为：" << e / f << endl;
	//自增自减
	//前置递增前置递减
	int up = 12;
	cout << "up= " << up << endl;
	++up;//先让up加1，再使用加1后的up
	cout << "++up= " << up << endl;
	int down = 11;
	cout << "down= " << down << endl;
	--down;//先让down-1，然后再用-1后的down
	cout << "--down= " << down << endl;
	//后置递增后置递减
	int upp = 32;
	cout << "upp= " << upp << endl;
	int u = upp++;//先将up的值给u，然后up自身的值+1，先赋值，再自增
	cout << "u= " << u << endl;
	cout << "upp= " << upp << endl;
	int downn = 83;
	cout << "downn= " << downn << endl;
	int dow = downn--;//先赋值，再自减
	cout << "dow= " << dow << endl;
	cout << "downn= " << downn << endl;

	/*02赋值运算符*/
	//=
	int a02 = 20;//20赋给a02
	cout << "a02= " << a02 << endl;
	//+=,-=,*=,/=,%=
	int b02 = 29;
	int c02 = 39;
	cout << "b02+=c02 = " << (b02 += c02) << endl;//b02的值会变，b02=b02+c02
	b02 = 29;//重置
	cout << "b02-=c02 = " << (b02 -= c02) << endl;
	b02 = 29;
	cout << "b02*=c02 = " << (b02 *= c02) << endl;
	b02 = 29;
	cout << "b02/=c02 = " << (b02 /= c02) << endl;
	b02 = 29;
	cout << "b02%=c02 = " << (b02 %= c02) << endl;
	b02 = 29;

	/*03比较运算符*/
	//输出0，代表假，1代表真
	//<,>
	int a03 = 294;
	int b03 = 324;
	cout << "a03 < b03 = " << (a03 < b03) << endl;
	cout << "a03 > b03 = " << (a03 > b03) << endl;
	//<=,>=
	cout << "a03 <= b03 = " << (a03 <= b03) << endl;
	cout << "a03 >= b03 = " << (a03 >= b03) << endl;
	//==
	cout << "a03 == b03 = " << (a03 == b03) << endl;
	//!=
	cout << "a03 != b03 = " << (a03 != b03) << endl;

	/*04逻辑运算符*/
	//返回值结果也为0和1
	//! 逻辑非
	int a04 = 19;
	int b04 = 0;
	cout << "!a04 = " << !a04 << endl;
	cout << "!b04 = " << !b04 << endl;
	//&& 逻辑并
	//同真为真，其余为假
	cout << "a04 && b04 = " << (a04 && b04) << endl;
	//|| 逻辑或
	//同假为假，其余为真
	cout << "a04 || b04 = " << (a04 || b04) << endl;
	system("pause");
	return 0;
}