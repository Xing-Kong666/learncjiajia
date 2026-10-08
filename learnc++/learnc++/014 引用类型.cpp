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
int main() {
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

	/*05引用类型的本质*/

	/*06常量引用*/
	system("pause");
	return 0;
}