#include <iostream>
using namespace std;

int main07() {
	/*01break语句*/
	//打印楼层数
	int floor = 0;
	while (1) {
		floor++;
		if (floor == 5) {
			break;
		}
		cout << floor << endl;
	}
	/*02continue语句*/
	//打印0-100，遇到5的倍数不打印
	int num = 0;
	while (num <= 100) {
		if (num % 5 == 0) {
			num++;
			continue;
		}
		else {
			cout << num << endl;
			num++;
		}
	}
	/*03goto语句*/
	int go = 0;
	while (go<101) {
		if (go % 2 == 0) goto Even;
		else goto Odd;
	//话题也是按顺序执行的，和case类似，需设置continue或break
	Even:
		cout << go * go << endl;
		go++;
		continue;
	Odd:
		cout << go * 12 << endl;
		go++;
	}
	system("pause");
	return 0;
}