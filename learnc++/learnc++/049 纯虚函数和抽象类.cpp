#include <iostream>
using namespace std;

/*
纯虚函数：
virtual 返回值类型 函数名（）= 0
带有纯虚函数的类为抽象类，抽象类不能实例化对象
*/

class anispeak {
public:
	//在开发中父类的函数一般没有意义，通常就设置为纯虚函数
	virtual void func() = 0;
};
class catspeak :public anispeak {
public:
	void func() {
		cout << "小猫喵喵啊喵" << endl;
	}
};
class dogspeak :public anispeak {
public:
	void func() {
		cout << "小狗汪汪啊汪" << endl;
	}
};
void dospeak(anispeak& ani) {
	//抽象类不能实例化对象，但可以写指针等
	//anispeak a;
	//公共的函数接口
	ani.func();
}
void test049() {
	catspeak cat;
	dospeak(cat);
	dogspeak dog;
	dospeak(dog);
}
int main049() {
	test049();
	system("pause");
	return 0;
}