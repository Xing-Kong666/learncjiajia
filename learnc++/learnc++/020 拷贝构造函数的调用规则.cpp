#include <iostream>
using namespace std;

/*
调用规则：
编译器默认初始三个函数 默认构造、默认析构、默认拷贝函数
设置了有参构造，会初始拷贝函数，不会初始默认构造
设置了拷贝函数，不会初始默认构造和有参构造函数
*/

class bear {
public:
	bear(int x) {
		cout << "有参构造函数的调用" << endl;
	}
	~bear() {
		cout << "析构函数的调用" << endl;
	}
private:
	int b;
};
class chick {
public:
	chick(const chick& p) {
		cout << "拷贝构造函数的调用" << endl;
	}
	~chick() {
		cout << "析构函数的调用" << endl;
	}
private:
	int c;
};
int main() {
	cout << "测试一：设有参" << endl;
	//没有默认构造函数，调用会出错
	//bear ex1;
	bear ex2(24);
	bear ex3(ex2);

	cout << "测试二：设拷贝" << endl;
	//没有默认构造
	//chick ex4;
	//没有有参构造函数
	//chick ex5(44);
	//拷贝构造函数无法发挥作用
	//chick ex6;

	system("pause");
	return 0;
}