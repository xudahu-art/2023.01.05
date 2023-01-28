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

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool m_FileIsEmpty;

	//ͳ���ļ��е�����
	int get_EmpNum();

	//��ʼ��Ա����
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//�ж�ְ���Ƿ���ڣ�������ڣ�����ְ��������ֵ�е�λ�ã������ڷ���-1�Ϳ���
	int isExist(int id);

	//�޸�ְ��
	void Mod_Emp();

    //����ְ��
	void Find_Emp();

	//���ձ�Ž�������
	void Sort_Emp();

	//����ļ��Ĳ���
	void Clean_File();

	//��������
	~WorkerManager();
};
