#include <iostream>
using namespace std;
#include <string>

//string substr(int pos = 0, int n = npos);//返回从pos开始的n个字符
void test08() {
	string st1 = "ahelloa";
	cout << "substrst1 = " << st1.substr(1, 5) << endl;
}

int main08() {
	test08();
	system("pause");
	return 0;
}