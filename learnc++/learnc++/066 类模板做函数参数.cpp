#include <iostream>
using namespace std;
/*
类模板做函数参数
1、直接指定参数类型
2、参数模板化
3、类模板化
团队开发中主要使用第一种
*/
template<class T>
class personss {
public:
	personss() {
		cout << "personss的构造函数" << endl;
	}
	T ex;
};
void print1(personss<string>&p) {
	cout << "直接指定类型" << endl;
}
template<class T>
void print2(personss<T>& p) {
	cout << "参数模板化" << endl;
}
template<class T1>
void print3(T1& p) {
	cout << "类模板化" << endl;
}
void test06601() {
	personss<string>p;
	print1(p);
	print2(p);
	print3(p);
}
int main066() {
	test06601();
	system("pause");
	return 0;
}