#include <iostream>
using namespace std;
//一种容器对应一个头文件
#include <vector>
#include <algorithm>

void fun(int val) {
	cout << val << endl;
}
void test01() {
	//vector为一种容器，可以理解为数组，具有存储顺序
	vector<int>ex;
	for (int i = 0; i < 34; i++) {
		//push_back为vector容器的内置方法
		ex.push_back(i);
	}
	//第一种遍历写法
	//iterator为vector里的迭代器，每一个容器都有对应的迭代器
	vector<int>::iterator ibegin = ex.begin();//第一个元素的下标
	vector<int>::iterator iend = ex.end();//最后一个元素后面的下标，大小等于长度
	cout << "method1:"<<endl;
	while (ibegin != iend) {
		cout << *ibegin << endl;
		ibegin++;
	}
	//第二种遍历写法
	cout << "method2:"<<endl;
	for (vector<int>::iterator ibegin2 = ex.begin(); ibegin2 != ex.end(); ibegin2++) {
		cout << *ibegin2 << endl;
	}
	//第三种遍历写法，需引入头文件algorithm
	ibegin = ex.begin();
	//最后一个参数为for_each算法里代码块的具体函数实现
	cout << "method3:"<<endl;
	for_each(ex.begin(), ex.end(), fun);
}
int main() {
	test01();
	system("pause");
	return 0;
}