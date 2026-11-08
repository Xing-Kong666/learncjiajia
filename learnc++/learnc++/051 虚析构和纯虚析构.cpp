#include <iostream>
using namespace std;
#include <string>

/*
在子类中有成员有开辟到堆区的内存时，利用多态之后释放父类指针，不会调用子类的析构函数
那么实际上就仅仅释放了子类原有的开辟的内存，子类成员开辟的内存不会释放，会导致内存泄漏

解决办法：设置父类的析构函数为虚函数或纯虚函数，这样当释放父类指针之前，由于子类生命周期结束
父类指针与子类指针绑定会调用子类析构，释放子类开辟的内存，然后再delete释放子类本身，最后解绑后析构父类

虚析构和纯虚析构都需要实现，可用于父类指针释放子类对象，子类对象存在自主开辟内存的情况，其余情况任意

*/
class haf {
public:
	haf() {
		cout << "haf父类构造函数的调用" << endl;
	}
	virtual void func() = 0;
	// virtual ~haf() {
	//	cout << "haf父类析构函数的调用" << endl;
	//}
	virtual ~haf() = 0;
};
haf::~haf() {
	cout << "haf父类析构函数的调用" << endl;
}
class has :public haf 
{
public:
	has(string name) {
		hname = new string(name);
		cout << "has子类构造函数的调用" << endl;
	}
	void func() {
		cout << "hashashas" << endl;
	}
	~has() {
		if (hname!=NULL) {
			cout << "has子类析构函数的调用" << endl;
			delete hname;
			hname = NULL;
		}
	}
	string* hname;
};


void test051() {
	haf* h = new has("tom");
	h->func();
	delete h;
	h = NULL;
}
int main051() {
	test051();
	system("pause");
	return 0;
}