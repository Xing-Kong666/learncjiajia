#include <iostream>
using namespace std;

int main() {
	/*01一维数组*/
	//定义
	/*
	1、数据类型 数组名[数组长度（常量）]
	2、数据类型 数组名[数组长度（常量）]={数据1，数据2，数据3，...}
	3、数据类型 数组名[]={数据1，数据2，数据3，...}
	*/
	//int arr1[11];
	//自动补全后续数据为0
	int arr1[11] = {1,2,3,4};
	//int arr1[] = {22,36,56,84};
	//数组名的作用
	/*
	1、查看数组所占内存空间
	2、访问数组首地址
	*/
	cout <<"数组所占的内存空间为：" << sizeof(arr1) <<" 字节" << endl;
	cout << "数组的长度为：" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "数组的首地址为：(16进制)" << arr1 << endl;
	cout << "数组的首地址为：(10进制)" << (int)arr1 << endl;
	/*一维数组案例-五只小猪的最大体重*/
	int max = 0;
	int pigs[5];
	for (int i = 0; i < 5; i++) {
		cin >> pigs[i];
	}
	for (int i = 0; i < 5; i++) {
		if (pigs[i] > max)max = pigs[i];
	}
	cout << "最大的小猪体重为：" << max <<" kg" << endl;
	/*一维数组案例-数组逆置*/
	//初始数组
	int arr2[9];
	//逆置两端下标
	int left = 0, right = 8;
	//输入数组
	cout << "请为数组输入九个数字: " << endl;
	for (int i = 0; i < 9; i++) {
		cin >> arr2[i];
	}
	//主循环
	while (left < right) {
		int temp = arr2[left];
		arr2[left] = arr2[right];
		arr2[right] = temp;
		left++;
		right--;
	}
	//打印逆置后的数组
	for (int i = 0; i < 9; i++) {
		cout << arr2[i]<<" ";
	}
	cout << endl;
	/*一维数组案例-冒泡排序*/
	//定义数组
	int arr3[10];
	//提示用户输入乱序数组
	cout << "请为数组初始化(输入10位数字)" << endl;
	//用户端输入
	for (int i = 0; i < 10; i++) {
		cin >> arr3[i];
	}
	//冒泡排序数组
	//外层循环为9，意为排九个数字，最后一个数字不用排，一共需要过9次
	for (int i = 0; i < 9; i++) {
		//内层循环的总长为每次的比较次数，限制条件也可由下标边界和已排数字的关系计算
		for (int j = 0; j < 10 - 1 - i; j++) {
			//前比后大则交换
			if (arr3[j] > arr3[j + 1]) {
				int temp = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = temp;
			}
		}
	}
	//打印排序后的数组
	for (int i = 0; i < 10; i++) {
		cout << arr3[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}