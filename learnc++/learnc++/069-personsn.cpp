#include "069-personsn.h"

template<class T1, class T2>
personsn<T1, T2>::personsn(T1 name, T2 age) {
	this->m_name = name;
	this->m_age = age;
}
template<class T1, class T2>
void personsn<T1, T2>::showpersonsn() {
	cout << "ÐÕÃû£º " << m_name << " ÄêÁä£º " << m_age << endl;
}