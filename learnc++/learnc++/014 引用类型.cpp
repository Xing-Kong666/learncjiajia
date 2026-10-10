#include <iostream>
using namespace std;

//值传递与引用传递进行比较
void swapn(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "函数里测试值传递" << endl;
	cout << "a = " << a << " " << "b = " << b << endl;
}
//引用传递
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//引用类型作为函数返回值
int& suml(int a, int b) {
	int c = a + b;
	return c;
}
int& sumg(int& c) {
	c = 42;
	return c;
}
//const对引用类型进行修饰，实参p可以不为const类型
void print(const int& p) {
	//p = 320;常量引用主要防止误操作
	cout << "p = " << p << endl;
}

int main014() {
	/*01引用类型的写法*/
	int a = 194;
	//a的别名为b
	int& b = a;
	cout << "测试一：" << endl;
	cout << "a = " << a << " " << "b = " <<b<< endl;
	cout << "&a = " << (int) & a << " " << "&b = " << (int)&b << endl;
	if (&a == &b)cout << "true" << endl;
	else cout << "false" << endl;
	/*02引用类型的注意事项*/
	//引用类型必须初始化，初始化后不能改变指向
	int c = 302;
	//只是进行了赋值，不是改变指向
	b = c;
	cout << "测试二：" << endl;
	cout << "c = " << c << " " << "b = " << b <<" "<<"a = "<<a<<endl;
	cout << "&a = " << (int)&a << " " << "&b = " << (int)&b << " " << "&c = " << (int)&c << endl;
	if (&a == &b)cout << "true" << endl;
	else cout << "false" << endl;
	/*03引用类型作为函数参数*/
	cout << "测试三：" << endl;
	int e1 = 32, e2 = 53;
	cout << "原值为" << e1 << " " << e2 << endl;
	swapn(e1, e2);
	cout << "函数外测试值传递" << endl;
	cout << "值为" << e1 << " " << e2 << endl;
	cout << "引用传递" << endl;
	swap(e1, e2);
	cout << "e1 = " << e1 << " " << "e2 = " << e2 << endl;
	/*04引用类型作为函数返回值*/
	int &getl = suml(1, 3);
	cout << "测试四：" << endl;
	//变量在栈区，生命周期结束，再次访问为非法的，得到的是随机值
	cout << "getl = " << getl << endl;

	int c4 = 29;
	//c的生命周期没有结束
	int& getg = sumg(c4);
	cout << "getg = " << getg << endl;

	//函数返回值可作为左值
	sumg(c4) = 93;
	cout << "c = " << c4 << endl;
	cout << "getg = " << getg << endl;
	/*05引用类型的本质*/

	//引用类型的本质为int&getg 为 int *const getg 即为指针常量，实质为int *const getg=&c;编译器内部转换

	/*06常量引用*/
	//int& c6 = 10;
	//10存放在全局区里的常量区，不能被改变，所以指向其的指针也应为指向常量的类型，即用const修饰
	cout << "测试五：" << endl;
	const int& c6 = 10;
	cout << "c6 = " << c6 << endl;

	int a7 = 93;
	int& c7 = a7;
	print(c7);
	const int& c8 = 108;
	print(c8);
	system("pause");
	return 0;
}