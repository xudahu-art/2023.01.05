#include<iostream>
using namespace std;
#include"workerManager.h"

#include "worker.h"
#include "employee.h"
int main()
{
	//���Դ��룺
	Worker* worker = NULL;
	worker = new Employee(1,"����",1);
	worker->showInfo();

	//WorkerManager wm;
	//int choice = 0;
	//while (true)
	//{
	//	wm.Show_Menu();
	//	cout << "����������ѡ��" << endl;
	//	cin >> choice;
	//	switch (choice)
	//	{
	//	case 0://�˳�ϵͳ
	//		wm.ExitSystem();
	//		break;
	//	case 1:
	//		break;
	//	case 2:
	//		break;
	//	case 3:
	//		break;
	//	case 4:
	//		break;
	//	case 5:
	//		break;
	//	case 6:
	//		break;
	//	case 7:
	//		break;
	//	default:
	//		system("cls");
	//		break;
	//	}
	//}
	
	system("pause");
	return 0;
}