#include <iostream>
using namespace std;
#include <string>

class person22 {
public:
	person22() :p_name("王五"),p_age(43)
	{

	}
	//初始化列表，给属性一个默认值
	person22(string name,int age):p_name(name), p_age(age)
	{
		cout << "person22有参构造函数的调用" << endl;
	}
	~person22() {
		cout << "person22析构函数的调用" << endl;
	}
	void printcontent() {
		cout << "名字：" << p_name << " ";
		cout << "年龄：" << p_age << endl;
	}
private:
	string p_name;
	int p_age;
};
void test02201() {
	person22 ex1("张三", 23);
	ex1.printcontent();
	person22 ex2;
	ex2.printcontent();
}
int main022() {
	test02201();
	system("pause");
	return 0;
}