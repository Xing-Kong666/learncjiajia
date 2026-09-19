#include <iostream>
using namespace std;
#include <string>

//指针与函数-值传递
//值传递只会生成一个相同的副本，不会对原实参有任何影响
void CoutVariate(int a) {
	cout << "值传递的变量 = " << a << endl;
	//试验值传递a是否会变
	a = 43;
}
//指针与函数-地址传递
//地址传递会改变指针指向的值，会对原实参产生影响
void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void BubbleSort(int arr1[],int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr1[j] > arr1[j + 1]) {
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}
}
int main() {
	/*01指针的定义与使用*/
	int a = 0;
	//*为解引用，*ptr为指向的变量a，ptr为指针，存储的为a的地址
	int* ptr = &a;
	cout << "指针的地址为：" << ptr << endl;
	cout <<"指针所指变量的值为："<<* ptr << endl;
	/*02空指针*/
	//两种均为空指针的形式，推荐第二个形式，空指针指针指向内存中的首地址0的位置
	int* ptr1 = NULL;
	int* ptr2 = nullptr;
	/*03野指针*/
	//非法空间无法访问，访问会出错，写程序时需要避免这种错误，要么是空指针，要么等于具体变量的地址
	int* ptr3 =(int *)0x533223;
	//cout << "*ptr3 = " << *ptr3 << endl;
	/*04指针所占的内存空间*/
	//32位系统占4个字节，64位系统占8个字节
	int* ptr4 = nullptr;
	long* ptr5 = nullptr;
	string* ptr6 = nullptr;
	char* ptr7 = nullptr;
	cout << "ptr4的内存占用 = " << sizeof(ptr4) << endl;
	cout << "ptr5的内存占用 = " << sizeof(ptr5) << endl;
	cout << "ptr6的内存占用 = " << sizeof(ptr6) << endl;
	cout << "ptr7的内存占用 = " << sizeof(ptr7) << endl;
	/*05const在指针中的使用*/
	int a05 = 29;
	int b05 = 380;
	int c05 = 43445;
	//const在前*在后，常量指针，指向常量的指针，const修饰常量，指针指向可变，指针指向的值不可变
	//错误情况：*P1=85;
	const int* p1 = &a05;
	cout << "*p1 = " << *p1 << endl;
	//const在后*在前，指针常量，指针是常量，const修饰指针，指针指向不可变，指向的值可变
	//错误情况：p2=*a05;
	int* const p2 = &b05;
	cout << "*p2 = " << *p2 << endl;
	//const+*+const，常量指针常量，指向常量的指针常量，const修饰常量和指针，指针和指向的值都不可变
	//错误情况：p3=*a05;和*p3=434;
	const int* const p3 = &c05;
	cout << "*p3 = " << *p3 << endl;
	/*06指针和数组*/
	//初始和赋地址
	int arr[12] = { 87,25,25,36,97,14,32,68,5,99,85,9 };
	int *pt1 = arr;
	cout << "arr的地址为 = " << arr << endl;
	//通过指针访问并打印数组,形式1
	for (int i = 0; i < 12; i++) {
		cout << *pt1 << " ";
	//这种情况下指针会移动，初始指向数组首地址，最后指向最后一个元素的首地址
		if(i<11)pt1++;
	}
	cout << endl;
	cout << "pt1的地址为 = " << pt1 << endl;
	//对地址进行重置
	pt1 = arr;
	//通过指针访问并打印数组，形式2
	for (int i = 0; i < 12; i++) {
	//通过下标访问，此时pt1就相当于数组名，和数组名一样地址不变，仍在首地址位置
		cout << pt1[i] << " ";
	}
	cout << endl;
	cout << "pt1的地址为 = " << pt1 << endl;
	/*07指针和函数*/
	int a07 = 8429;
	int b07 = 2222;
	CoutVariate(a07);
	cout << "值传递将原值在函数中修改后a07 = " << a07 << endl;
	swap(&a07, &b07);
	cout << "a07" << "\t";
	CoutVariate(a07);
	cout << "b07" << '\t';
	CoutVariate(b07);
	/*08指针数组函数*/
	//初始化数组
	int arr1[8] = { 12,85,63,26,51,48,68,39 };
	cout << "原数组：" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;
	BubbleSort(arr1,sizeof(arr1)/sizeof(arr1[0]));
	for (int i = 0; i < 8; i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}