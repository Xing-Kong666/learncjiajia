#include <iostream>
using namespace std;

/*
成员函数作友元 friend 返回值 类：：函数名();
*/
class Building;
class Goodgay {
public:
	Goodgay(Building& e);
	void pri();
	void pub();
	Building* building;
};
class Building {
	//成员函数作为友元
	friend void Goodgay::pri();
public:
	Building();
	string bsetting;
private:
	string bbed;
};
//类外定义函数
Goodgay::Goodgay(Building &e) {
	building = &e;
	cout << "Goodgay 构造函数调用" << endl;
}
void Goodgay::pri() {
	//成员函数是友元能访问
	cout << "成员函数访问其他类的私有成员" << endl;
	cout << "building->bsetting = " << building->bsetting << endl;
	cout << "building->bbed = " << building->bbed << endl;
}
void Goodgay::pub() {
	cout << "成员函数访问其他类的成员" << endl;
	cout << "building->bsetting = " << building->bsetting << endl;
	//成员函数不是友元访问不了
	//cout << "building->bbed = " << building->bbed << endl;
}
Building::Building() {
	bsetting = "客厅";
	bbed = "卧室";
}
void test031() {
	Building b;
	Goodgay ex(b);
	ex.pri();
	ex.pub();
}
int main() {
	test031();
	system("pause");
	return 0;
}