#include <iostream>
using namespace std;

template<class Name,class Age=int>
class personsf {
public:
	personsf(Name name, Age age) {
		m_name = name;
		m_age = age;
	}
	void print();
	Name m_name;
	Age m_age;
};
//这里做一个尝试，在类外定义，也需要指定类型，而且第22的初始指定类型和第23行print的指定类型需一致，否则会出错
void personsf<string>::print() {
	cout << m_age << " ";
	cout << m_name << endl;
}
void test064() {
	//1.类模板不能自动类型推导，必须写参数列表显示指定类型
	personsf<string> p1("xiaozhang", 20);
	p1.print();
	//2.类模板能够有默认参数类型
	personsf<string,char>p2("xiaoli", 97);
	cout << p2.m_age << " " << p2.m_name << endl;

}
int main064() {
	test064();
	system("pause");
	return 0;
}