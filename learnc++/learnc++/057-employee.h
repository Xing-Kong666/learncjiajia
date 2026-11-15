#pragma once
#include <iostream>
using namespace std;
#include "057-worker.h"

class employee:public worker {
public:
	employee(int id, string name, int pid);
	virtual void ShowInfo();
	virtual string GetPos();
	~employee();
};