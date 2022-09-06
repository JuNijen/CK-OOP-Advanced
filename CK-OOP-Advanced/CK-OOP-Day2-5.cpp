#include "CK-OOP.h"


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

void Student::InitStudentData(string id, string name, int kor, int eng)
{
	stdId = id;
	stdName = name;
	korClassScore = kor;
	engClassScore = eng;
}

string Student::PrintStudent()
{
	return "학번 : " + stdId + "이름 : " + stdName + "국어 : " + korClassScore + "영어" + engClassScore;
}

int StudentMain() 
{
	Student student;
	student.InitStudentData(3, 6, 9);
	student.PrintStudent();

	std::cout << student.PrintStudent();

	return 0;
}