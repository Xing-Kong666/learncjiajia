#include <iostream>
using namespace std;


/*
继承分为：
1.public公共继承
public->public
protected->protected
private->private(不可访问)

2.protected保护继承
public->protected
protected->protected
private->private(same with the front)

3.private私有继承
public->private
protected->private
private->private(same to the front)
*/
class base {
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//public
class son1 :public base
{
public:
	int m_d;
	void test() {
		m_a = 24;
		m_b = 42;
		//m_c=23;
		m_d = 42;
	}
};
//protected
class son2 :protected base
{
public:
	int m_d;
	void test() {
		m_a = 19;
		m_b = 20;
		//m_c = 100;
		m_d = 98;
	}
};
//private
class son3 :private base
{
public:
	int m_d;
	void test() {
		m_a = 14;
		m_b = 15;
		//m_c = 16;
		m_d = 17;
	}
};
void test039() {
	son1 ex1;
	ex1.test();
	cout << "son1" << " ";
	cout << ex1.m_a << " ";
	//cout << ex1.m_b << " ";
	//cout << ex1.m_c << " ";
	cout << ex1.m_d << endl;

	son2 ex2;
	ex2.test();
	cout << "son2" << " ";
	//cout << ex2.m_a << " ";
	//cout << ex1.m_b << " ";
	//cout << ex1.m_c << " ";
	cout << ex2.m_d << endl;

	son3 ex3;
	ex3.test();
	cout << "son3" << " ";
	//cout << ex3.m_a << " ";
	//cout << ex1.m_b << " ";
	//cout << ex1.m_c << " ";
	cout << ex3.m_d << endl;
}
int main039() {
	test039();
	system("pause");
	return 0;
}