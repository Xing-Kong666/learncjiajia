#include <iostream>
using namespace std;

/*
this指针
用于区分同一非静态函数下不同对象的调用
区分相同名称的成员属性和形参，解决名称的冲突
作为对象本身返回*this
*/
class a026 {
public:
	a026(int age) {
		//age = age;打印为无效值
		//this指向的是调用初始化函数的对象，即ex1，不过一般不要用相同的名称命名
		this->age = age;
	}
	a026 returna026(a026& copy) {
		this->age += copy.age;
		return *this;
	}
	a026& returna(a026& copy) {
		this->age += copy.age;
		return *this;
	}
	//声明内初始化无用
	int age = 4;
};

void test02601() {
	a026 ex1(424);
	cout <<"age = "<<ex1.age << endl;
}

void test02602() {
	a026 ex2(43);
	a026 ex3(ex2);
	cout << "ex3.age猜测值为 43 " << endl;
	cout << "ex3.age = " << ex3.age << endl;
	//第二次调用return026函数返回的不是ex3本身而是副本
	//链式编程思想，与cout一致
	ex3.returna026(ex2).returna026(ex2);
	cout << "加二倍的43的猜测值为129" << endl;
	cout << "ex3.age = " << ex3.age << endl;
	a026 ex4(ex2);
	cout << "ex4.age = " << ex4.age << endl;
	ex4.returna(ex2).returna(ex2);
	cout << "猜测值为129" << endl;
	cout << "ex4.age = " << ex4.age << endl;
}
int main026() {
	test02601();
	test02602();
	system("pause");
	return 0;
}