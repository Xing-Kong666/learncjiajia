#include <iostream>
using namespace std;
/*
普通函数和模板函数重名时优先调用普通函数
如果想调用模板函数可以构建空参数列表强制调用
模板函数可以发生重载
当模板函数相较于普通函数更有优势时会先调用模板函数
*/
void printcontent(int a) {
	cout << "普通函数的调用" << endl;
}
template<class T>
//模板必须推出T的数据类型才能使用，也就是参数里得有T,由此推出参数列表不为空
void printcontent(T a) {
	cout << "模板函数的调用" << endl;
}
template<class T>
void printcontent(T a,T b) {
	cout << "模板重载函数的调用" << endl;
}
void test061() {
	int a=1;
	int b=1;
	printcontent(a);
	printcontent<>(a);
	printcontent(a, b);
	char c = 'c';
	//此时调用函数模板，因为普通函数还需进行隐式类型转换
	printcontent(c);

}
int main061() {
	test061();
	system("pause");
	return 0;
}