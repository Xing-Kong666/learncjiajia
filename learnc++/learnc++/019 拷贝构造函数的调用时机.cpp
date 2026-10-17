#include <iostream>
using namespace std;
#include <string>
/*
拷贝构造函数的调用
1、一个实例化对象初始另一个对象
2、作为参数传递
3、作为返回值进行值传递 
*/
class hero {
public:
	hero() {
		cout << "构造函数调用" << endl;
	}
	hero(const hero& p) {
		cout << "拷贝函数调用" << endl;
	}
	~hero() {
		cout << "析构函数调用" << endl;
	}
private:
	string name;
};
void test01(hero p) {
	cout << "参数调用测试" << endl;
}
hero test02() {
	hero t;
	cout << (int)&t << endl;
	return t;
}
int main() {
	cout << "测试一：实例化对象初始化" << endl;
	hero l;
	hero b(l);

	cout << "测试二：参数调用测试" << endl;
	test01(l);

	cout << "测试三：函数返回值调用" << endl;
	hero ex=test02();
	//编译器优化，return的值为对象本身，地址相同，空间访问合法是因为t实际的内存空间在main里，在test02里创建
	cout << (int)&ex << endl;
	system("pause");
	return 0;
}