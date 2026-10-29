#include <iostream>
using namespace std;

/*
自减：
前置递减--num
后置递减num--
*/
class pro {
	friend ostream& operator<<(ostream& cout, class pro p);
	//friend ostream& operator<<(ostream& cout, class pro& p);
public:
	pro(int val) :num(val) {
	}
	//前置递减
	pro& operator--() {
		num--;
		return *this;
	}
	//后置递减
	pro operator--(int) {
		pro temp = *this;
		num--;
		return temp;
	}
private:
	int num;
};

//后置递减返回的是值而不是对象，所以不能用引用类型接收，得用普通值类型接收
//前置递减返回的是对象，既可以用引用，也可以用值
ostream& operator<<(ostream& cout, class pro p) {
	cout << "p.num = " << p.num << endl;
	return cout;
}
//ostream& operator<<(ostream& cout, class pro& p) {
//	cout << "p.num = " << p.num << endl;
//	return cout;
//}
void test03401() {
	pro ex(4290);
	cout << --ex << endl;
	cout << ex-- << endl;
	cout << ex << endl;
}
int main034() {
	test03401();
	system("pause");
	return 0;
}