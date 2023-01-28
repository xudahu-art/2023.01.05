#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//构造函数
	WorkerManager();
	//展示菜单
	void Show_Menu();
	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//添加职工的功能
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空的标志
	bool m_FileIsEmpty;

	//统计文件中的人数
	int get_EmpNum();

	//初始化员工的
	void init_Emp();

	//显示职工
	void Show_Emp();

	//删除职工
	void Del_Emp();

	//判断职工是否存在，如果存在，返回职工所在数值中的位置，不存在返回-1就可以
	int isExist(int id);

	//修改职工
	void Mod_Emp();

    //查找职工
	void Find_Emp();

	//按照编号进行排序
	void Sort_Emp();

	//清空文件的操作
	void Clean_File();

	//析构函数
	~WorkerManager();
};
