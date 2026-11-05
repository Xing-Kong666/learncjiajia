#include <iostream>
using namespace std;
/*
菱形继承：
两个子类共同继承同一个父类，两个子类的孙子类继承两个子类，会出现成员名相同的情况，此时虽然可以通过限定作用域来正常访问，不会产生二义性
但是就缺少了唯一性，变量的数值不是唯一的，并且还会浪费空间无意义，所以就需要用虚继承的方式解决
虚继承：通过virtual关键字来从父类那里继承虚指针，指针指向原变量，从而统一意义
class 类名：virtual 继承方式 父类名
*/
class faf {
public:
	int m_a;
};
class fas:virtual public faf {
public:
	//继承m_a
	int m_b;
};
class fbs :virtual public faf {
public:
	//继承m_a
	int m_c;
};
class fcgs :public fas, public fbs {
public:
	//继承fas::m_a,fbs::m_a,m_b,m_c
	int m_d;
};

void test045() {
	fcgs ex;
	//会显示不明确
	//ex.m_a = 421;
	//需指定作用域
	/*ex.fas::m_a = 42;
	ex.fbs::m_a = 252;*/
	//加了virtual后就统一了
	ex.m_a = 421;
	cout << ex.m_a << endl;
	cout << ex.fas::m_a << endl;
	cout << ex.fbs::m_a << endl;
	//fas作用域下的faf作用域内的m_a
	cout << ex.fas::faf::m_a << endl;
}
int main045() {
	test045();
	system("pause");
	return 0;
}