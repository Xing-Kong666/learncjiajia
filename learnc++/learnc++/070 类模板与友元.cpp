#include <iostream>
using namespace std;
#include <string>
/*
类模板与友元
1.全局函数类内实现
2.全局函数类外实现
*/
template<class T1,class T2>
class personsz;
template<class T1, class T2>
//直接指定传入的模板参数类型就不用写template了，但是会报错xixixi
void ffunc2(personsz<T1,T2>& p) {
	cout << "全局函数类外实现" << endl;
	cout << "姓名： " << p.m_name << " 年龄： " << p.m_age << endl;
}
template<class T1,class T2>
class personsz {
	// 类内实现
	friend void ffunc(personsz<string, int>& p) {
		cout << "全局函数类内实现" << endl;
		cout << "姓名： " << p.m_name << " 年龄： " << p.m_age << endl;
	}
	//类外实现用模板，声明需加空参数列表对齐
	//全局函数的实现需要提前让编译器知道，所以要提前写在前面
	friend void ffunc2<>(personsz<T1, T2>& p);
public:
	personsz(T1 name, T2 age) {
		this->m_name = name;
		this->m_age = age;
	}
	T1 m_name;
	T2 m_age;
};

void test07001() {
	personsz<string, int>p("Tom", 20);
	ffunc(p);
}
void test07002() {
	personsz<string, int>p("Jerry", 20);
	ffunc2(p);
}
int main070() {
	test07001();
	test07002();
	system("pause");
	return 0;
}