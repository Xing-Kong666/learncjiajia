#include <iostream>
using namespace std;

class eaf {
public:
	int m_a;
};
class ebf {
public:
	int m_b;
};
class eas:public eaf,public ebf {
public:
	int m_c;
};

void test044() {
	eas ex;
	ex.m_a = 11;
	ex.m_b = 12;
	ex.m_c = 13;
	cout << "ex.m_a == " << ex.m_a << endl;
	cout << "ex.m_b == " << ex.m_b << endl;
	cout << "ex.m_c == " << ex.m_c << endl;
	cout << "sizeof(eas) == " << sizeof(ex) << endl;
}
int main044() {
	test044();
	system("pause");
	return 0;
}