#include <iostream>
using namespace std;

template<class T1,class T2>
class personse {
public:
	personse(T1 name, T2 age);
	//{
	//	this->m_name = name;
	//	this->m_age = age;
	//}
	void showpersonse();
	//{
	//	cout << "姓名： " << m_name << " 年龄： " << m_age << endl;
	//}
	T1 m_name;
	T2 m_age;
};
template<class T1,class T2>
personse<T1, T2>::personse(T1 name, T2 age) {
	this->m_name = name;
	this->m_age = age;
}
template<class T1,class T2>
void personse<T1, T2>::showpersonse() {
	cout << "姓名： " << m_name << " 年龄： " << m_age << endl;
}
void test068() {
	personse<string, int> p("xiaoming", 12);
	p.showpersonse();
}
int main068() {
	test068();
	system("pause");
	return 0;
}