#include <iostream>
using namespace std;
/*
()重载
*/
class byte {
public:
	byte(){}
	byte(int a, int b) {
		m_a = a;
		m_b = b;
	}
	int operator()(int a, int b) {
		m_a = a;
		m_b = b;
		return m_a+m_b;
	}
	int m_a;
	int m_b;
};

void operator<<(ostream& cout, byte& p) {
	cout << "p.m_a = " << p.m_a << endl;
	cout << "p.m_b = " << p.m_b << endl;
}
void test037() {
	byte ex1(42,64);
	//仿函数
	ex1(52, 23);
	cout << "ex1.m_a = " << ex1.m_a << endl;
	cout << "ex1.m_b = " << ex1.m_b << endl;
	//匿名对象无参构造
	byte();
	//实例化对象无参构造
	byte a;
	//匿名对象有参构造
	byte(42, 13);
	//匿名函数对象，构造+仿函数
	cout << byte()(24,53);
}
int main037() {
	test037();
	system("pause");
	return 0;
}