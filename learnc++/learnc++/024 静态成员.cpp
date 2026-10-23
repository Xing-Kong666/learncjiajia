#include <iostream>
using namespace std;
#include <string>

class person24 {
public:
	/*
	静态函数：
	所有对象共用一个函数
	静态函数只能操作静态属性
	*/
	static void init() {
		p_name = "e";
		p_age = 43;
		/*
		只能操作静态属性，静态属性属于全体对象，动态属性属于特定对象
		*/
		//ce = 43;
	}
	/*
	静态属性：所有对象共用一个属性
			编译时分配内存（全局区）
			类内声明，类外初始化
	*/
	int ce;
	static int p_age;
private:
	static void print() {
		cout << p_name << endl;
	}
	static string p_name;
};

//类外初始化，表示为person24的类成员
int person24::p_age = 18;
string person24::p_name = "z";

void test02401() {
	cout << "静态成员" << endl;
	person24 ex1;
	/*
	两套调用：
	对象调用
	类本身调用
	*/
	cout << ex1.p_age << endl;
	cout << person24::p_age << endl;
	/*
	私有的类内访问，类外不可访问
	*/
	//cout << person24::p_name << endl;

	person24 ex2;
	/*
	两套调用：
	对象调用
	类本身调用
	*/
	cout << "静态函数" << endl;
	ex2.init();
	cout << ex2.p_age << " ";
	person24::init();
	cout << ex2.p_age << endl;
	/*
	私有的类内访问，类外不可访问
	*/
	//ex2.print();
}
int main() {
	test02401();
	system("pause");
	return 0;
}