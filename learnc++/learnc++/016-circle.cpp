#include "016-circle.h"

//函数形式为这样（circle::）是代表circle类内，可以通过函数访问私有属性
void circle::setr(int r) {
	c_r = r;
}
int circle::getr() {
	return c_r;
}
void circle::setcenter(point center) {
	c_center = center;
}
point circle::getcenter() {
	return c_center;
}