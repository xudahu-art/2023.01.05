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
	//���캯��
	WorkerManager();
	//չʾ�˵�
	void Show_Menu();
	//�˳�ϵͳ
	void ExitSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//���ְ���Ĺ���
	void Add_Emp();

	//�����ļ�
	void save();

	//��������
	~WorkerManager();
};
