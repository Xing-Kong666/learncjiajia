#include <iostream>
using namespace std;

/*
类作为友元 在被调用类中添加调用的类 friend class 调用该类的类名
*/
//声明一个类
class clothes;

class clothes {
	friend class color;
public:
	clothes() {
		cout << "clothes 构造函数的调用" << endl;
	}
	string tshirt;
private:
	string pants;
};
//定义一个类
class color {
public:
	color() {
		cout << "color 构造函数的调用" << endl;
	}
	//类内声明，类外定义
	void initcolor();
	clothes clo;
};

void color::initcolor() {
	color ex1;
	ex1.clo.tshirt = "白色";
	ex1.clo.pants = "黑色";
	cout << "ex1.clo.tshirt = " << ex1.clo.tshirt << endl;
	cout << "ex1.clo.pants = " << ex1.clo.pants << endl;
}
int main030() {
	color ex;
	ex.initcolor();
	system("pause");
	return 0;
}