#pragma once
#include <iostream>
#include <string>


int main();


class Student
{
private:
	string name;	 //�̸�
	string stdid;		//�й�

public:
	void InitMyData(string n, string id);	//������ �ʱ�ȭ
	void Show();	 // ����ϴ� �Լ�
};
int StudentMain();


class Box
{
private:
	int width;			//����
	int length;			//����
	int height;			//����

public:
	void InitBoxData(int w, int l, int h);
	int  calvolume();	//���� : ����x����x����
};
int BoxMain();


class Student
{
private:
	string stdId;	//�й�
	string stdName;	//�̸�
	int	korClassScore; //����
	int	engClassScore; //����


public:
	void InitStudentData(string id, string name, int kor, int eng);
	int  PrintStudent();
};