#include <iostream>
using namespace std;

int main() {
	/*选择结构*/
	//单行单条件if选择结构
	int score = 0;
	cout << "请输入你的四级成绩：" << endl;
	cin >> score;
	cout << "你的四级成绩为：" << score << endl;
	if (score >= 425) {
		cout << "恭喜你通过了四级考试！！！" << endl;
		cout << "真是可喜可贺哦" << endl;
	}
	//多行单条件if/else选择结构
	int score2 = 0;
	cout << "请输入你的高考成绩：" << endl;
	cin >> score2;
	cout << "你的高考成绩为：" << score2 << endl;
	if (score2 >= 600) {
		cout << "恭喜你过了600的大关" << endl;
	}
	else {
		cout << "没有到600也不用气馁，继续努力" << endl;
	}
	//多条件的选择结构
	int score3 = 394;
	system("pause");
	return 0;
}