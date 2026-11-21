#include <iostream>
using namespace std;
/*
类模板与继承
1、子类继承父类必须指定模板类型，否则无法分配内存
2、如果想要灵活继承，可以用模板
*/
template<class T>
class basess {
public:
	void print() {
		//显示参数的类型
		cout << typeid(T).name() << endl;
	}
	T ex;
};
//指定继承父类模板类型
class sonss :public basess<string>
{
public:
	int exx;
};
template<class T1,class T2>
class sonsss :public basess<T2>
{
public:
	void print() {
		cout << typeid(T1).name() << endl;
	}
	T1 s;
};
void test067() {
	sonss s;
	s.print();
	//char传给T2，T2接收类型char，传给父类，父类得到类型
	sonsss<string, char>p;
	p.print();
	//访问父类同名成员需添加作用域,模板要加已经传过的参数列表
	p.basess<char>::print();
}
int main067() {
	test067();
	system("pause");
	return 0;
}