#include <iostream>
using namespace std;

/*
==和！=重载
*/
class bit {
public:
	bit(int a, int b) :m_a(a), m_b(b) {
	}
	//不等为0，等为1
	bool operator==(bit &p) {
		if (this->m_a == p.m_a &&
			this->m_b == p.m_b) 
		{
			return true;
		}
		return false;
	}
	//不等为1，等为0
	bool operator!=(bit& p) {
		if (this->m_a != p.m_a ||
			this->m_b != p.m_b)
		{
			return true;
		}
		return false;
	}
	int m_a;
	int m_b;
};

void test036(){
	bit ex1(42, 53);
	bit ex2(48, 79);
	if (ex1 == ex2)cout << "ex1 = ex2" << endl;
	if (ex1 != ex2)cout << "ex1 != ex2" << endl;
}
int main036() {
	test036();
	system("pause");
	return 0;
}