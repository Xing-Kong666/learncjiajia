#pragma once//文件只包含一次，不重复包含
#include <iostream>
using namespace std;

template<class T1, class T2>
class personsn {
public:
	personsn(T1 name, T2 age);
	void showpersonsn();
	T1 m_name;
	T2 m_age;
};