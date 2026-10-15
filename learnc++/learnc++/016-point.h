#pragma once
#include <iostream>
using namespace std;

class point {//点类
public:
	void setx(int x);
	int getx();
	void sety(int y);
	int gety();
private:
	int c_x;//x坐标
	int c_y;//y坐标
};
