#include <iostream>
using namespace std;

/*
空指针可以访问不带属性的函数
*/
class a027 {
public:
	void c1(){
		cout << "这个是不带属性的普通非静态成员函数" << endl;
	}
	void c2(int age) {
		//this指向的是空对象，不能访问属性
		this->age = age;
		cout << "这个是带属性赋值的普通非静态成员函数" << endl;
	}
	int age;
};
void test02701() {
	a027* ex1 = nullptr;
	ex1->c1();
	//ex1->c2(43);

}
int main027() {
	test02701();
	system("pause");
	return 0;
}