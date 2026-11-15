#pragma once
#include <iostream>
using namespace std;
#include <string>

class worker {
public:
	virtual void ShowInfo() = 0;
	virtual string GetPos() = 0;

	int m_id;
	string m_name;
	int posid;
};