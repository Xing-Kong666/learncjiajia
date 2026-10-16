#include <iostream>
using namespace std;
#include <string>

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
	cout << "测试一：默认构造函数" << endl << endl;
	persons ex1;
	cout << endl;
	cout << "测试二：有参构造函数" << endl << endl;
	persons ex2(135);
	cout << endl;
	cout << "测试三：拷贝构造函数" << endl << endl;
	persons ex3;
	persons ex4(ex3);
	cout << endl;
	system("pause");
	return 0;
}