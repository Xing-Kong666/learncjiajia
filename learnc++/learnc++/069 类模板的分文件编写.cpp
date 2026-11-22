#include <iostream>
using namespace std;
#include <string>
//#include "personsn.h"//直接引用头文件会在链接阶段产生错误，“无法解析的外部命令”
//#include "personsn.cpp"引入.cpp文件可行，但一般通用为hpp
#include "personsn.hpp"//.hpp为约定俗成的后缀名，可以用其他的
/*
类模板的分文件编写
由于类模板中成员函数的创建时机是在调用时，所以直接包含.h文件无法让编译器知道函数的具体实现
所以需要想办法让它知道
1.直接包含.cpp文件，让它知道怎么实现的
2.包含.hpp文件，将声明与实现写在一起，这个为常用方法
*/
void test069() {
	personsn<string, int>p("xiaoli",18);
	p.showpersonsn();
}
int main069() {
	test069();
	system("pause");
	return 0;
}