#include <iostream>
using namespace std;

class cloth23 {
public:
	cloth23() :c_tshirt("白色"), c_pants("黑色") 
	{
		cout << "cloth23的无参构造函数的调用" << endl;
	}
	cloth23(string tshirt, string pants) :c_tshirt(tshirt), c_pants(pants)
	{
		cout << "cloth23有参构造函数的调用" << endl;
	}
	~cloth23() {
		cout << "cloth23的析构函数的调用" << endl;
	}
	string c_tshirt;
	string c_pants;
};

class person23 {
public:
	person23() :p_age(224)//, p_cloth("黄色", "灰色") 
	{
		cout << "person23无参构造函数的调用" << endl;
	}
	~person23() {
		cout << "person23析构函数的调用" << endl;
	}
	void print() {
		cout << "上衣颜色：" << p_cloth.c_tshirt << " ";
		cout << "裤子颜色：" << p_cloth.c_pants << " ";
		cout << "人的年龄：" << p_age << endl;
	}
	cloth23 p_cloth;
private:
	int p_age;
};
void test02301() {
	//定义一个person23类的对象，首先会定义cloth23的对象并调用cloth23的构造函数
	person23 ex1;
	ex1.print();
	//函数结束时首先会析构外层大类，然后是内层小类，即person23->cloth23
}
int main023() {
	test02301();
	system("pause");
	return 0;
}