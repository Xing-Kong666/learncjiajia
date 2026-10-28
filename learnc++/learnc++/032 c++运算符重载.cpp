#include <iostream>
using namespace std;

/*
运算符重载：
成员函数运算符重载
全局函数运算符重载
*/


class wine {
public:
	wine operator+(wine& p) {
		wine temp;
		temp.m_goal1 = this->m_goal1 + p.m_goal1;
		temp.m_goal2 = this->m_goal2+ p.m_goal2;
		return temp;
	}
	int m_goal1;
	int m_goal2;
};
struct add {
	int num;
	string name;
};
struct add operator+(struct add& p, struct add& q) {
	struct add temp;
	temp.num = p.num + q.num;
	temp.name = p.name;
	temp.name += q.name;
	return temp;
}
void testoperator() {
	wine ex;
	ex.m_goal1 = 1;
	ex.m_goal2 = 2;
	wine ex1;
	ex1.m_goal1 = 3;
	ex1.m_goal2 = 4;
	//实质是调用重载函数
	//wine ex2 = ex1.operator+(ex);
	wine ex2 = ex1 + ex;
	cout << "ex2.m_goal1 = ex.m_goal1 + ex1.m_goal1 = " << ex2.m_goal1 << endl;
	cout << "ex2.m_goal2 = ex.m_goal2 + ex1.m_goal2 = " << ex2.m_goal2 << endl;
	struct add p,q;
	p.name = "欢迎来到";
	p.num = 43;
	q.name = "c++";
	q.num = 49;
	//实质
	//struct add ex3=operator+(p,q);
	struct add ex3 = p + q;
	cout << "ex3.name = " << ex3.name << endl;
	cout << "ex3.num = " << ex3.num << endl;
}
int main032() {
	testoperator();
	system("pause");
	return 0;
}