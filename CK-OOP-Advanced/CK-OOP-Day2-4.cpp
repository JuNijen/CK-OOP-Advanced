#include "CK-OOP.h"


class Box
{
    private:
    int width;			//가로
    int length;		//세로
	int height;			//높이

    public:
	void InitBoxData(int w, int l, int h);
	int  calvolume();	//부피 : 가로x세로x높이
};

void Box::InitBoxData(int w, int l, int h)
{
	width  = w;
	length = l;
	height = h;
}

int Box::calvolume()
{
	return width*length*height;
}

int BoxMain() 
{
	Box box;
	box.InitBoxData(3, 6, 9);
	box.calvolume();

	std::cout << box.calvolume();

	return 0;
}