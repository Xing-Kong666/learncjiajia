#include <iostream>
using namespace std;

/*
左移运算符重载
成员函数重载，实现不了cout在前对象在后的效果
全局函数重载，可以实现cout在前对象在后面
*/
//cout为ostream类，标准输出流
class left {
	friend ostream& operator<<(ostream& cout, class left& p);
public:
	left(int a, int b) :m_a(a), m_b(b) {
	}
	//cout全局只允许有一个，所以传引用，返回引用可以继续链式输出接下来的内容
	ostream& operator<<(ostream& cout) {
		cout << "这个是成员左移重载" << endl;
		return cout;
	}
private:
	int m_a;
	int m_b;
};
//用全局函数进行重载是正常思路
ostream& operator<<(ostream &cout,class left &p) {
	cout << "p.m_a = " << p.m_a << " p.m_b = " << p.m_b;
	return cout;
}

void test033() {
	class left l(43, 24);
	//链式编程思想
	cout << l<<endl;
	//倒反天罡
	//l.operator<<(cout);
	l << cout<<endl;
}
int main033() {
	test033();
	system("pause");
	return 0;
}