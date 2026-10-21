#include <iostream>
using namespace std;

/*
浅拷贝：只会进行值的复制，地址也是同样的复制，不会开辟新的地址，这会导致调用析构函数时重复释放内存报错
深拷贝：会在堆区开辟内存进行赋值操作，指针指向不同的内存，不会重复释放内存
默认拷贝函数是浅拷贝，深拷贝函数需自己定义
*/
class person21 {
public:
	person21(int age,int height) {
		p_age = age;
		p_height = new int(height);
		cout << "person21有参构造函数的调用" << endl;
	}
	person21(const person21& p) {
		p_age = p.p_age;
		//p_height = p.p_height;浅拷贝
		p_height = new int(*p.p_height);
		cout << "深拷贝构造函数的调用" << endl;
	}
	~person21() {
		if (p_height != nullptr)delete p_height;
		cout << "person21析构函数的调用" << endl;
	}
	int p_age;
	int* p_height;
};

void test01() {
	person21 ex1(42,180);
	cout << "ex1 = " << ex1.p_age <<" height = "<<*ex1.p_height<< endl;

	person21 ex2(ex1);
	cout << "ex2 = " << ex2.p_age <<" height = "<<*ex2.p_height<< endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}