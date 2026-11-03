#include <iostream>
using namespace std;

/*
与类作为类成员一致，father先构造，然后son再构造，son先析构，father再析构
*/
class father {
public:
	father() {
		cout << "father构造" << endl;
	}
	~father() {
		cout << "father析构" << endl;
	}
};

class son041:public father
{
public:
	son041() {
		cout << "son041构造" << endl;
	}
	~son041() {
		cout << "son041析构" << endl;
	}
};


void test041() {
	father ex;
	cout << endl;
	son041 ex1;


}
int main041() {
	test041();
	system("pause");
	return 0;
}