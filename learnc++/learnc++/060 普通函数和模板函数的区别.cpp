#include <iostream>
using namespace std;

/*
普通函数可以发生隐式类型转换
模板函数在用自动类型转换时，不能用隐式类型转换（参照前面必须推导出一致的数据类型）
模板函数在用显示指定类型时可以指定类型转换
*/
int Padd(int a, int b) {
	return a + b;
}
template<class T>
T Add(T a, T b) {
	return a + b;
}
void test060() {
	int a = 10;
	int b = 20;
	char c = 'c';
	cout << Padd(a, b) << endl;
	cout << Padd(a, c) << endl;
	cout << Add(a, b) << endl;
	//cout << Add(a, c) << endl;无法转换char->int
	cout << Add<int>(a, c) << endl;
}
int main060() {
	test060();
	system("pause");
	return 0;
}