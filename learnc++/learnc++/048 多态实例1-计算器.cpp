#include <iostream>
using namespace std;

/*
利用多态实现同一函数不同的四则运算
好处：
代码结构清晰
可读性强
维护性强，拓展性强
*/
/*
开发中保持开闭原则
对拓展进行开放，对修改进行关闭
这样好处理和维护
*/
class calculator {
public:
	virtual int oper() {
		return 0;
	}
	static int num1;
	static int num2;
	//int num1;
	//int num2;
};
int calculator::num1 = 52;
int calculator::num2 = 13;
class addnum :public calculator
{
public:
	int oper() {
		return num1 + num2;
	}
};
class subnum :public calculator
{
public:
	int oper() {
		return num1 - num2;
	}
};
class multipnum :public calculator
{
public:
	int oper() {
		return num1 * num2;
	}
};
class dividenum :public calculator 
{
public:
	int oper() {
		return num1 / num2;
	}
};

int calculate(calculator &cal) {
	return cal.oper();
}
void test048() {

	//calculator cal;
	//cal.num1 = 32;
	//cal.num2 = 52;
	addnum add;
	subnum sub;
	multipnum mul;
	dividenum div;
	
	cout << "+ " << calculate(add) << endl;
	cout << "- " << calculate(sub) << endl;
	cout << "* " << calculate(mul) << endl;
	cout << "/ " << calculate(div) << endl;
}
int main048() {
	test048();
	system("pause");
	return 0;
}