#include <iostream>
using namespace std;
#include <vector>
#include <string>

//容器嵌套容器
void test03() {
	vector<vector<int>>ex;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	ex.push_back(v1);
	ex.push_back(v2);
	ex.push_back(v3);
	ex.push_back(v4);
	//迭代器目前的作用和指针一样
	//大迭代器指向大容器里的小容器
	for (vector<vector<int>>::iterator it = ex.begin(); it != ex.end(); it++) {
		//小迭代器指向小容器里的元素
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
			cout << *vit << " ";
		}
		cout << endl;
	}
}
int main03() {
	test03();
	system("pause");
	return 0;
}