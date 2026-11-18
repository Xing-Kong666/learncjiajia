#include <iostream>
using namespace std;

class personst {
public:
	personst(int a, int b) {
		this->a = a;
		this->b = b;
	}
	int a;
	int b;
};
template<class T>
bool equal(T a, T b) {
	if (a == b)return true;
	else return false;
}
template<>bool equal(personst a, personst b) {
	if (a.a == b.a && a.b == b.b)return true;
	else return false;
}
void test062() {
	personst p1(1, 2);
	personst p2(2, 3);
	//equal(p1, p2);直接运用通用模板传入不是内置类型的类型(比如类，或者是数组)没有具体化无法实现，这是局限性
	bool ret=equal(p1, p2);//与上一行相同，但是这一行是为了对比，将T具体化为实例，具体化的优先级比普通模板高，会优先调用
	if (ret)cout << "p1 == p2" << endl;
	else cout << "p1 != p2" << endl;
}
int main062() {
	test062();
	system("pause");
	return 0;
}