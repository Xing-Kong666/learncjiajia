#include <iostream>
using namespace std;

//ÅÅĞòÄ£°å
template<class T>
void Sort(T arr[],int len) {
	for (int i = 0; i < len; i++) {
		int max = i;
		for (int j = i + 1; j < len; j++) {
			if (arr[max] < arr[j])max = j;
		}
		if (max != i) {
			T temp = arr[i];
			arr[i] = arr[max];
			arr[max] = temp;
		}
	}
}
//´òÓ¡Ä£°å
template<class T>
void printarray(T arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test05901() {
	char arr[] = "afebnvb";
	int len = sizeof(arr) / sizeof(char);
	Sort(arr, len);
	printarray(arr, len);
}
void test05902() {
	int arr[] = { 4,1,8,7,3,5,6,6,1 };
	int len = sizeof(arr) / sizeof(int);
	Sort(arr, len);
	printarray(arr, len);
}
int main059() {
	test05901();
	test05902();
	system("pause");
	return 0;
}