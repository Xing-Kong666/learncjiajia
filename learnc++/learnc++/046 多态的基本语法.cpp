#include <iostream>
using namespace std;

/*
多态的使用条件：进行了继承+子类对函数进行重写
多态的使用：父类的指针或引用 执行子类的重写对象
*/
/*
用virtual 关键字可以实现函数的晚绑定
早绑定：在编译阶段函数就已经和类绑定好了，无法修改
晚绑定：在运行阶段绑定，可通过函数重写实现多功能，用virtual实现晚绑定
函数重写：返回值 函数名（参数列表）均相同，改变括号里的内容
*/
class gaf {
public:
	int m_a;
	virtual void func() {
		cout << "父类函数的调用" << endl;
	}
};
class gas :public gaf
{
public:
	int m_b;
	void func() {
		cout << "子类重写函数的调用" << endl;
	}
};
//晚绑定是参数父类的指针与子类对象在调用虚函数时进行绑定，并根据函数是否重写调用相应内容
void test046(gaf& ex) {
	//传子类用父类接收只能访问父类那一部分以及重写函数
	//cout << ex.m_b << endl;
	ex.func();
	ex.gaf::func();
}
void test04601(gas& ex) {
	ex.func();
}
int main046() {
	gaf ex;
	gas ex1;
	//可以传子类也可以传父类
	test046(ex);
	test046(ex1);
	//父类传子类不行
	//test04601(ex);
	system("pause");
	return 0;
}