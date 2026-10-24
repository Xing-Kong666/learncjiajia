#include <iostream>
using namespace std;

/*
返回值 函数名（）const {}为常函数
常函数不能修改属性
属性类型前+mutable可以在常函数中修改
*/
/*
常对象（const a028 ex）只能调用常函数,防止了常对象的值被错误修改
普通对象都可调用，......
*/
class a028 {
public:
	void init()const 
	{
		a = 35;
		//b = 443;不可修改,此时this指针由指针常量变成了常量指针常量
		cout << "这是一个常函数" << endl;
	}
	void in() {
		cout << "这是一个非常函数" << endl;
	}
	mutable int a;
	int b;
};
void test02801() {
	const a028 ex1;
	ex1.init();
	cout << ex1.a << endl;
	//ex1.in();不可访问常函数
	a028 ex2;
	ex2.init();
	ex2.in();
}
int main028() {
	test02801();
	system("pause");
	return 0;
}