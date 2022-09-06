#pragma once
#include <iostream>
#include <string>


int main();


class Student
{
private:
	string name;	 //이름
	string stdid;		//학번

public:
	void InitMyData(string n, string id);	//데이터 초기화
	void Show();	 // 출력하는 함수
};
int StudentMain();


class Box
{
private:
	int width;			//가로
	int length;			//세로
	int height;			//높이

public:
	void InitBoxData(int w, int l, int h);
	int  calvolume();	//부피 : 가로x세로x높이
};
int BoxMain();


class Student
{
private:
	string stdId;	//학번
	string stdName;	//이름
	int	korClassScore; //국어
	int	engClassScore; //영어


public:
	void InitStudentData(string id, string name, int kor, int eng);
	int  PrintStudent();
};