#include <iostream>
using namespace std;
/*
全局函数作友元，在类内写friend+函数声明，即可访问私有属性
*/
class goodgay {
	friend void init();
public:
	goodgay() {
		cout << "goodgay 构造函数调用" << endl;
	}
	string settingroom;
private:
	string bedroom;
};

void init() {
	goodgay ex1;
	ex1.settingroom = "客厅";
	ex1.bedroom = "卧室";
	cout << "ex1.settingroom: " << ex1.settingroom << endl;
	cout << "ex1.bedroom: " << ex1.bedroom << endl;
}
int main029() {
	init();
	system("pause");
	return 0;
}