#include "workerManager.h"

WorkerManager::WorkerManager()
{

}
void WorkerManager::Show_Menu()
{
	cout << "*****************************************" << endl;
	cout << "********  欢迎使用职工管理系统！ ********" << endl;
	cout << "************  0.退出管理程序  ***********" << endl;
	cout << "************  1.增加职工信息  ***********" << endl;
	cout << "************  2.显示职工信息  ***********" << endl;
	cout << "************  3.删除离职职工  ***********" << endl;
	cout << "************  4.修改职工信息  ***********" << endl;
	cout << "************  5.查找职工信息  ***********" << endl;
	cout << "************  6.按照编号排序  ***********" << endl;
	cout << "************  7.清空所有文档  ***********" << endl;
	cout << "*****************************************" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}
WorkerManager::~WorkerManager()
{

}