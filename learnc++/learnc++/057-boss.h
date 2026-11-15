#pragma once
#include <iostream>
using namespace std;
#include "057-worker.h"

class boss :public worker {

public:
	boss(int id, string name, int pid);
	virtual void ShowInfo();
	virtual string GetPos();
	~boss();
};