#pragma once
#include <iostream>
using namespace std;
#include "057-worker.h"

class manager :public worker {
public:
	manager(int id, string name, int pid);
	virtual void ShowInfo();
	virtual string GetPos();
	~manager();
};
