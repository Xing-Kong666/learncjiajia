#include <iostream>
using namespace std;
#include <ctime>

int main() {
	////初始变量值
	//int num = 0;
	////while打印0-99
	//while (num < 100) {
	//	cout << num << endl;
	//	num++;
	//}
	////控制台暂停执行代码
	//system("pause");
	////清空页面
	//system("cls");
	///*while案例->猜数字*/
	////添加随机数种子，改变伪随机为绝对随机，根据时间来随机生成
	//srand((unsigned int)time(NULL));
	////初始输入值变量,产生1-100随机数
	//int goal = rand() % 100 + 1;
	////cout << goal << endl;
	//int val = 0;
	////提示输入所猜的数字
	//cout << "我们现在要进行猜数字游戏，请输入一个数字进行游戏吧" << endl;
	////用户端输入
	//cin >> val;
	////while循环猜数字
	//while (1) {
	//	if (val > goal) {
	//		cout << "猜大了" << endl;
	//	}
	//	else if (val < goal) {
	//		cout << "猜小了" << endl;
	//	}
	//	else {
	//		cout << "猜对了" << endl;
	//		break;
	//	}
	//	cin >> val;
	//}	/*01while循环*/


	///*02do-while循环*/
	////打印0-9
	////初始变量
	//int num02 = 0;
	////do-while循环打印数字
	//do {
	//	cout << num02 << endl;
	//	num02++;
	//} while (num02 < 10);
	///*do-while循环案例-三位数中的水仙花数（a*a*a+b*b*b+c*c*c=abc）*/
	////初始变量
	//int i = 100;
	////do-while循环
	//do {
	//	//取位,个十百
	//	int g = i % 10;
	//	int s = i / 10 % 10;
	//	int b = i / 100;
	//	if (g * g * g + s * s * s + b * b * b == i) {
	//		cout << i << endl;
	//	}
	//	i++;
	//} while (i < 1000);

	///*03for循环*/
	////求6的倍数 
	//cout << "1000以内6的倍数" << endl;
	////for循环    0           1           2
	//for (int num03 = 6; num03 < 1000; num03++) {//执行顺序0132132132132...
	//	//       3
	//	if (!(num03 % 6)) {//余数为零取反执行
	//		cout << num03 << endl;
	//	}
	//}
	/*for循环案例-敲桌子*/
	int q;
	//for循环从1-100中找出敲桌子的数，8的倍数，个位数是8，十位数是8
	for (q = 1; q <= 100; q++) {
		//满足敲桌子条件的打印
		if (q % 8 == 0 || q % 10 == 8 || q / 10 == 8) {
			cout <<"太好了是 " <<q<< " 敲桌子敲桌子" << endl;
		}
		else {
			cout << q <<"不是敲桌子数"<< endl;
		}
	}
	system("pause");
	return 0;
}