#include <iostream>
using namespace std;

//声明后面加类，即为类模板
template<class Name,class Age>
class personstt {
public:
	personstt(Name name, Age age) {
		m_name = name;
		m_age = age;
	}
	Name m_name;
	Age m_age;
};
void test063() {
	//类模板需要显示相关类型，不能自动推导
	personstt<string,int>p1("张三", 23);
	cout << p1.m_name << " ";
	cout << p1.m_age << endl;
}
int main063() {
	test063();
	system("pause");
	return 0;
}