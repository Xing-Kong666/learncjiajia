#include <iostream>
using namespace std;

int main() {
	/*选择结构*/
	//01单行单条件if选择结构
	int score = 0;
	cout << "请输入你的四级成绩：" << endl;
	cin >> score;
	cout << "你的四级成绩为：" << score << endl;
	if (score >= 425) {
		cout << "恭喜你通过了四级考试！！！" << endl;
		cout << "真是可喜可贺哦" << endl;
	}
	//02多行单条件if/else选择结构
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
	//03多条件的选择结构
	int score3 = 394;
	//提示用户输入高考成绩
	cout << "请输入你的高考成绩：" << endl;
	//用户输入高考成绩
	cin >> score;
	//多条件选择
	if (score > 700) {
		cout << "6666666,太有实力了" << endl;
	}
	else if (score > 600) {
		cout << "666666,太有实力了" << endl;
	}
	else if (score > 500) {
		cout << "66666,太有实力了" << endl;
	}
	else if (score > 400) {
		cout << "6666,太有实力了" << endl;
	}
	else {
		cout << "666，太有实力了" << endl;
	}
	/*04嵌套选择结构*/
	//提示用户输入
	int pig1 = 0, pig2 = 0, pig3 = 0;
	cout << "请输入三只猪的体重" << endl;
	//用户输入
	cin >> pig1;
	cin >> pig2;
	cin >> pig3;
	//嵌套选择比较最重的猪
	if (pig1 > pig2) {
		if (pig1 > pig3) {
			cout << "pig1最重" << endl;
		}
		else if(pig1==pig3){
			cout << "pig1和pig3最重，且同样重" << endl;
		}
		else {
			cout << "pig3最重" << endl;
		}
	}
	else {
		if (pig2 > pig3) {
			cout << "pig2最重" << endl;
		}
		else if (pig2 == pig3) {
			cout << "pig2和pig3最重，且同样重" << endl;
		}
		else {
			cout << "pig3最重" << endl;
		}
	}
	/*三目运算符*/
	cout << "用三目运算符计算结果" << endl;
	cout << (((pig1 > pig2) ? pig1 : pig2) > pig3 ? ((pig1 > pig2) ? pig1 : pig2) : pig3) << endl;
	/*05switch选择结构*/
	//提示用户输入
	char sw = 'a';
	cout << "请输入单个字符：" << endl;
	//用户输入
	cin >> sw;
	//switch结构
	switch (sw) {
	case 'a':
	case 'b':
	case 'c':
	case 'd':
		cout << "你输入了四大天王（abcd）之一的" << sw << endl;
		//添加break结束语，防止继续往下不合目的的执行
		break;
	case 'x':
	case 'y':
	case 'z':
		cout << "你输入了常设未知量（xyz）的" << sw << endl;
		break;
	}
	system("pause");
	return 0;
}