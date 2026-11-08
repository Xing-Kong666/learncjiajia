#include <iostream>
using namespace std;
/*
设置虚基类，CPU，内存条，显卡

设置派生类 intel lenovo重写虚函数

设置computer类接收硬件，并调用相应函数
*/
class cpu {
public:
	virtual void funcc() = 0;
};
class memory {
public:
	virtual void funcm() = 0;
}; 
class videocard {
public:
	virtual void funcv() = 0;
};


class intelcpu :public cpu 
{
public:
	void funcc() {
		cout << "intelcpu运行成功" << endl;
	}
};
class intelmemory :public memory
{
public:
	void funcm() {
		cout << "intelmemory运行成功" << endl;
	}
}; 
class intelvideocard :public videocard
{
public:
	void funcv() {
		cout << "intelvideocard运行成功" << endl;
	}
};

class lenovocpu :public cpu
{
public:
	void funcc() {
		cout << "lenovocpu运行成功" << endl;
	}
};
class lenovomemory :public memory
{
public:
	void funcm() {
		cout << "lenovomemory运行成功" << endl;
	}
};
class lenovovideocard :public videocard
{
public:
	void funcv() {
		cout << "lenovovideocard运行成功" << endl;
	}
};

class computer {
public:
	computer(cpu* c,videocard* v,memory* m) {
		ccpu = c;
		cvideocard = v;
		cmemory = m;
	}
	void use() {
		//统一接口,父类接口子类实例
		ccpu->funcc();
		cvideocard->funcv();
		cmemory->funcm();
	}
private:
	cpu* ccpu;
	videocard* cvideocard;
	memory* cmemory;
};

void test052() {
	computer* ex = new computer(new intelcpu, new intelvideocard, new lenovomemory);
	ex->use();
	cout << "-------------------------------------" << endl;
	computer* ex2= new computer(new lenovocpu, new intelvideocard, new lenovomemory);
	ex2->use();
	delete ex;
	delete ex2;
	ex = NULL;
	ex2 = NULL;
}
int main052() {
	test052();
	system("pause");
	return 0;
}