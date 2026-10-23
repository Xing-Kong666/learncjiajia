#include <iostream>
using namespace std;

/*
只有非静态成员变量才占用对象空间
*/
class p {

};
class q {
public:
	//内存对齐
	//string a;
	int b;
	static int d;
	//char c;
};
class r {
public:
	void testsizeof() {

	}
};
void test02501(){
	/*
	空类也占空间1byte,是为了区分空对象的在内存中的位置
	*/
	p ex1;
	cout << "空类的内存大小 = " << sizeof(ex1) << endl;
	q ex2;
	/*
	只含属性，对象空间只有属性的内存,并且静态属性不占用对象空间
	*/
	cout << "只含属性类的内存大小 = " << sizeof(ex2) << endl;
	r ex3;
	/*
	只含方法，内存不存方法的内存
	*/
	cout << "只含方法类的内存大小 = " << sizeof(ex3) << endl;
}
int main() {
	test02501();
	system("pause");
	return 0;
}