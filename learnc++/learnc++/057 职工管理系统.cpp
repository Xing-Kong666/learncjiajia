#include <iostream>
using namespace std;
#include "057-employee.h"
#include "057-manager.h"
#include "057-worker.h"
#include "057-boss.h"
#include "057-workermanege.h"

int main() {
	workermanage wm;
	int choice;
	while (1) {
		wm.ShowMenu();
		cout << "请输入您要办理的业务: ";
		cin >> choice;
		switch (choice) {
		case 0:
			wm.ExitInterface();
			break;
		case 1:
			wm.AddPesonnal();
			break;
		case 2:
			wm.DisplayEmp();
			break;
		case 3:
			wm.DeleteEmp();
			break;
		case 4:
			wm.ModifyEmp();
			break;
		case 5:
			wm.SeekEmp();
			break;
		case 6:
			wm.SortEmp();
			break;
		case 7:
			wm.ClearEmp();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}