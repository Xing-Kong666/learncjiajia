#include <iostream>
using namespace std;
#include <string>

/*
构造函数：类名 （）{}
析构函数：~类名 （）{}
*/
//如果没有写构造函数好析构函数，编译器会自动创建空的两个函数
class animal {
public:
	animal() {
		cout << "默认构造函数的调用" << endl;
	}
	~animal() {
		cout << "析构函数的调用" << endl;
	}
private:
	string name;
};
int main017() {
	cout << "测试一：构造函数和析构函数的调用情况" << endl;
	animal ex;
	system("pause");
	return 0;
}