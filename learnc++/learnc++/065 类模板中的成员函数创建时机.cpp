#include <iostream>
using namespace std;

class personsf {
public:
	personsf():num1(132){}
	int num1;
};
class personsfi {
public:
	personsfi():num2(89){}
	int num2;
};
template<class T>
class personsfiv {
public:
	//生成时没有报错，说明函数没有创建，否则exam会同时出现两种类型
	void fun1() {
		cout << exam.num1 << endl;
	}
	void fun2() {
		cout << exam.num2 << endl;
	}
	T exam;
};
void test065() {
	personsfiv<personsf> p;
	p.fun1();
	//p在指定T的类型后，fun2的函数没有报错（fun2包含的类型与T不一致，会报错），则说明fun2此时不存在
	//调用fun2时报错了，说明此时fun2创建了出来，即调用时创建
	//p.fun2();
}
int main065() {
	test065();
	system("pause");
	return 0;
}