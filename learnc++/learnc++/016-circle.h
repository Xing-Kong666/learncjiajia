#pragma once
#include <iostream>
#include "016-point.h"
using namespace std;

class circle {//圆类
public:
	void setr(int r);
	int getr();
	void setcenter(point center);
	point getcenter();
private:
	int c_r;//圆的半径
	point c_center;//圆的圆心
};