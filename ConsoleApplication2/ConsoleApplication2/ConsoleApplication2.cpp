// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class CBagenaCopy
{
	int x;
	int y;
public:
	CBagenaCopy();
	CBagenaCopy(int a,int b);
	CBagenaCopy(CBagenaCopy &om);
	void setXY(int a,int b);
	void disPlay();

};
CBagenaCopy::CBagenaCopy()
{

}
CBagenaCopy::CBagenaCopy(int a, int b)
{
	x = a;
	y = b;

}
CBagenaCopy::CBagenaCopy(CBagenaCopy &om)
{
	x = om.x * 2;
	y = om.y * 3;
}
void CBagenaCopy::setXY(int a, int b)
{
	x = a;
	y = b;

}
void CBagenaCopy::disPlay()
{
	cout << "x=" << x << "y=" << y << endl;
}
void MyTest(CBagenaCopy temp)
{
	temp.disPlay();

}


int main()
{
	CBagenaCopy ot(500, 800);
	MyTest(ot);
    return 0;
}

