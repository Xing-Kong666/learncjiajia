#include <iostream>
using namespace std;

class drinking {
public:
	//煮水
	virtual void boil() = 0;
	//冲泡
	virtual void infuse() = 0;
	//倒入杯中
	virtual void pour() = 0;
	//加入辅料
	virtual void add() = 0;
	//整合制作
	void make() {
		//煮水
		boil();
		//冲泡
		infuse();
		//倒入杯中
		pour();
		//加入辅料
		add();
	}
};
class lemonade:public drinking
{
public:
	//煮水
	void boil() {
		cout << "煮好开水" << endl;
	}
	//冲泡
	void infuse() {
		cout << "将柠檬水冲泡好" << endl;
	}
	//倒入杯中
	void pour() {
		cout << "倒入塑料杯中,盖盖子" << endl;
	}
	//加入辅料
	void add() {
		cout << "加入冰块" << endl;
	}
};
class teaa:public drinking 
{
public:
	//煮水
	void boil() {
		cout << "煮好开水" << endl;
	}
	//冲泡
	void infuse() {
		cout << "将茶叶冲泡好" << endl;
	}
	//倒入杯中
	void pour() {
		cout << "倒入瓷杯中,盖盖子" << endl;
	}
	//加入辅料
	void add() {
		cout << "不用加辅料，纯天然茶叶冲泡，怡心养神" << endl;
	}
};
void dodrinking(drinking * &dri) {
	dri->make();//统一函数接口
	delete dri;
	dri = NULL;
}
void test050() {
	drinking* abs;
	abs = new lemonade;
	dodrinking(abs);
	cout << "--------------" << endl;
	abs = new teaa;
	dodrinking(abs);
}
int main050() {
	test050();
	system("pause");
	return 0;
}