#pragma once
#include <iostream>
using namespace std;
#include "057-worker.h"
#define FILEPOS "../files for procedure/worker.txt"
class workermanage {
public:
	//初始化
	workermanage();
	//显示菜单
	void ShowMenu();
	//退出
	void ExitInterface();
	//添加职工
	void AddPesonnal();
	//写入文件中,在末尾追加
	void WriteFile();
	//获取职工人数
	int GetNum();
	//显示职工信息
	void DisplayEmp();
	//判断职工是否存在
	int IsExist(int id);
	//删除职工
	void DeleteEmp();
	//修改职工信息
	void ModifyEmp();
	//职工编号查重
	bool SeekRepeat(worker** nowarray,int length, int id);
	//查找职工
	void SeekEmp();
	//对职工排序
	void SortEmp();
	//清空职工信息
	void ClearEmp();
	~workermanage();
	//当前职工数
	int curnum;
	//职工存储数组
	worker** per;
};