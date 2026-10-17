#include <iostream>
using namespace std;
#include <string>

//01构造函数分类
/*
按参数：无参构造，有参构造
按类型：普通构造，拷贝构造
*/
class persons {
public:
	//无参构造函数，普通构造
	persons() {
		cout << "默认（无参）构造函数调用" << endl;
	}
	//有参构造函数，普通构造
	persons(int a) {
		cout << "有参构造函数的调用" << endl;
	}
	//有参构造函数，拷贝构造
	//const 防修改，&减少空间损耗
	persons(const persons& p) {
		cout << "拷贝构造函数的调用" << endl;
	}
	~persons() {
		cout << "析构函数的调用" << endl;
	}
private:
	string pname;
	int page;
};

int main() {
	cout << "构造函数分类测试" << endl << endl;
	cout << "测试一：默认构造函数" << endl << endl;
	persons ex1;
	cout << endl;
	cout << "测试二：有参构造函数" << endl << endl;
	persons ex2(135);
	cout << endl;
	cout << "测试三：拷贝构造函数" << endl << endl;
	persons ex3;
	persons ex4(ex3);
	cout << endl << endl;
	system("pause");
	system("cls");

	//02 构造函数调用
	//括号法
	cout << "构造函数调用测试" << endl << endl;
	cout << "测试一：括号法" << endl;
	cout << "默认无参: " << endl;
	persons ex5;
	cout << "有参构造: " << endl;
	persons ex6(23);
	cout << "拷贝构造：" << endl;
	persons ex7(ex6);
	//显式法
	cout << "测试二：显式法调用" << endl;
	cout << "默认无参" << endl;
	persons ex8;
	cout << "有参构造" << endl;
	persons ex9 = persons(25256);
	cout << "拷贝构造" << endl;
	persons ex10 = persons(ex9);
	//隐式转换法
	cout << "测试三：隐式转换法" << endl;
	cout << "默认无参" << endl;
	persons ex11;
	cout << "有参构造" << endl;
	persons ex12 = 245;
	cout << "拷贝构造" << endl;
	persons ex13 = ex12;
	system("pause");
	system("cls");

	//03注意事项
	//初始化对象时如果要用默认构造函数初始化，不能加（），否则编译器会以为这个是函数的声明
	//persons ex14();
	//只调用构造函数的为初始化匿名对象,当前行结束之后生命周期结束，会调用析构函数
	persons(23);
	persons ex14;
	//编译器会把persons(ex14)等价于persons ex14,会导致重定义
	//persons(ex14);
	system("pause");
	return 0;
}