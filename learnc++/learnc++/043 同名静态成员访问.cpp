#include <iostream>
using namespace std;

/*
静态成员既能通过特定对象访问，又能通过类名访问,非静态成员只能通过对象访问
*/
class dad {
public:
	dad() {
		m_a = 4210;
	}
	static void d() {
		cout << "父类静态成员函数访问" << endl;
	}
	static int m_a;
};
//静态的属性必须在类外初始化，之后随意
int dad::m_a = 42;
class de :public dad
{
public:
	de() {
		m_a = 4219;
	}
	static void dee(){
		cout << "子类静态成员函数访问" << endl;
	}
	static int m_a;
};
int de::m_a = 521;
void test043() {
	//成员属性
	de ex;
	cout << "ex.m_a = " << ex.m_a << endl;
	cout << "ex.dad::m_a = " << ex.dad::m_a << endl;
	cout << "de::m_a = " << de::m_a << endl;
	//成员函数
	ex.dee();
	de::dee();
	ex.dad::d();
	de::dad::d();
	
}
int main043() {
	test043();
	system("pause");
	return 0;
}