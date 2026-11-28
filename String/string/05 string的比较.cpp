#include <iostream>
using namespace std;
#include <string>

//int compare(const string& str);//与字符串比较，相同为0，前大为1，前小为-1
//int compare(const char* s);
void test05() {
	string st1 = "C++";
	string st2 = "java";
	cout << "ret = " << st1.compare(st2) << endl;

	cout << "ret = " << st1.compare("go") << endl;
}
int main05() {
	test05();
	system("pause");
	return 0;
}