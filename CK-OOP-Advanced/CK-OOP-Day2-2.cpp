#include "CK-OOP.h"


class Student
{
    private:
    string name; //이름
    string stdid; //학번

    public:
		void InitMyData(string n, string id); //데이터 초기화
		void Show(); // 출력하는 함수
};

void Student::InitMyData(string n, string id)
{
	name = n;
	stdid = id;
}

void Student::Show()
{
	std::cout << "이름 : " << name << endl;
	std::cout << "학번 : " << stdid << endl;
}

int StudentMain()
{
	Student st;
	st.InitMyData("전시은", "202013197");
	st.Show();

	return 0;
}