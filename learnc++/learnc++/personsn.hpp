#pragma once//文件只包含一次，不重复包含
#include <iostream>
using namespace std;

template<class T1,class T2>
class personsn {
public:
	personsn(T1 name,T2 age);
	void showpersonsn();
	T1 m_name;
	T2 m_age;
};
template<class T1,class T2>
personsn<T1, T2>::personsn(T1 name,T2 age) {
	this->m_name = name;
	this->m_age = age;
}
template<class T1,class T2>
void personsn<T1, T2>::showpersonsn() {
	cout << "姓名： " << m_name << " 年龄： " << m_age << endl;
}