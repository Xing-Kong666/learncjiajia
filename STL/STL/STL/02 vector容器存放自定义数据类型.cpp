#include <iostream>
using namespace std;
#include <vector>
#include <string>

class personzt {
public:
	personzt(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};
void test02() {
	//存储personzt类型本身
	
	//vector<personzt>ex;
	//personzt p1("a", 10);
	//personzt p2("b", 11);
	//personzt p3("c", 12);
	//personzt p4("d", 13);
	//personzt p5("e", 14);
	//ex.push_back(p1);
	//ex.push_back(p2);
	//ex.push_back(p3);
	//ex.push_back(p4);
	//ex.push_back(p5);
	//for (vector<personzt>::iterator it = ex.begin(); it != ex.end(); it++) {
	//	cout << it->m_name << " ";
	//	cout << it->m_age << endl;
	//}

	//存储personzt类型的指针
	vector<personzt*>ex;
	personzt p1("a", 10);
	personzt p2("b", 11);
	personzt p3("c", 12);
	personzt p4("d", 13);
	personzt p5("e", 14);
	ex.push_back(&p1);
	ex.push_back(&p2);
	ex.push_back(&p3);
	ex.push_back(&p4);
	ex.push_back(&p5);
	for (vector<personzt*>::iterator it = ex.begin(); it != ex.end(); it++) {
	//it可视为二级指针，指向一级指针，一级指针为personzt*，*it解引为一级指针
	cout << (*it)->m_name << " ";
	cout << (*it)->m_age << endl;
}
}
int main02() {
	test02();
	system("pause");
	return 0;
}