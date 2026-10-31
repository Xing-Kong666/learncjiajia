#include <iostream>
using namespace std;

/*
编译器自动初始无参拷贝析构和赋值四种函数
赋值采用的是浅拷贝，则会导致析构时相同地址重复释放，所以自己需要重构赋值运算符
*/
class about {
public:
	about(int a,int b,int c) {
		m_c = new int(c);
		m_a = a;
		m_b = b;
	}
	//返回 值的类型会初始化匿名对象调用浅拷贝导致析构时出现错误
	about& operator=(about &p) {
		if (m_c != NULL) {
			delete m_c;
			m_c = NULL;
		}
		this->m_a = p.m_a;
		this->m_b = p.m_b;
		this->m_c = new int(*p.m_c);
		return *this;
	}
	~about() {
		if (m_c != NULL) {
			delete m_c;
			m_c = NULL;
		}
	}
	int m_a;
	int m_b;
	int* m_c;
};
void operator<<(ostream& cout, about& p) {
	cout << "p.m_a = " << p.m_a << " ";
	cout << "p.m_b = " << p.m_b << " ";
	cout << "*p.m_c = " << *p.m_c << endl;
}
void test035() {
	about ex1(24,35,66);
	about ex2(42,53,23);
	about ex3(32, 52, 13);
	//ex3=ex2.operator=(ex1);
	ex2 = ex1;
	//链式编程思想，值相同
	ex3 = ex2 = ex1;
	cout << ex3;
	cout << ex2;
	cout << ex1;

}
int main035() {
	test035();
	system("pause");
	return 0;
}