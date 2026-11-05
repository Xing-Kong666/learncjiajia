#include <iostream>
using namespace std;

/*
子类对象访问子类成员直接访问
访问父类同名成员需添加作用域，因为子类中的成员将父类中的同名成员隐藏了起来
子类名.父类作用域::同名成员
*/
class car {
public:
	car() {
		m_a = 24;
	}
	int m_a;
};
class care :public car
{
public:
	care() {
		m_a = 513;
	}
	int m_a;
};

void test042() {
	care ex;
	cout << "ex.m_a = " << ex.m_a << endl;
	cout << "ex.car::m_a = " << ex.car::m_a << endl;
	//非静态成员引用必须和特定对象相对
	//cout << care::car::m_a;
}
int main042() {
	test042();
	system("pause");
	return 0;
}