#include <iostream>
using namespace std;
#include "071-arrayso.hpp"

void test071() {
	arrayso<int>p(10);
	cout << p.getcapacity() << endl;
	cout << p.getsize() << endl;

	arrayso<int> a(p);
	cout << a.getcapacity() << endl;

	arrayso<int>b(18);
	cout << b.getcapacity() << endl;

	b = a;
	cout << b.getcapacity() << endl;

	//for (int i = 0; i < 4; i++) {
	//	p[i] = i + 666;
	//}size没有更新，先不用了
	for (int i = 0; i < 4; i++) {
		p.push(i+666);
	}
	for (int i = 0; i < p.getsize(); i++) {
		cout << p[i] << " ";
	}
	cout << endl;

	p.pop();
	cout << p.getsize() << endl;
	for (int i = 0; i < p.getsize(); i++) {
		cout << p[i] << " ";
	}
	cout << endl;
}
int main071() {
	test071();
	system("pause");
	return 0;
}