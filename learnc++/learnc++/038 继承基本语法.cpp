#include <iostream>
using namespace std;
/*
继承：
语法：class 子类名 ： 权限（public、privated、private） 父类名
子类 派生类 父类+自己新定义的成员
父类 基类 提供基础的内容
*/

//父类
class found {
public:
	void Menu() {
		cout << "开始菜单" << endl;
		cout << "关卡选择" << endl;
		cout << "新手教程" << endl;
		cout << "团队介绍" << endl;
		cout << "设置" << endl;
		cout << "退出" << endl;
	}
};

//子类
class game1:public found
{
public:
	void name() {
		cout << "勇者大闯关" << endl;
	}
};
class game2 :public found
{
public:
	void name() {
		cout << "飞越大峡谷" << endl;
	}
};

void test038() {
	found ex1;
	game1 ex2;
	game2 ex3;
	ex1.Menu();
	cout << "--------------------------------" << endl;
	ex2.name();
	ex2.Menu();
	cout << "--------------------------------" << endl;
	ex3.name();
	ex3.Menu();
}
int main038() {
	test038();
	system("pause");
	return 0;
}