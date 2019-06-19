#pragma once
#include<iostream>
using namespace std;

class point
{
public:
	point(void);
	~point(void);
	void vd1();   //计算两点之间的距离
	void vd2();   //判断点和线的关系
	void vd3();   //判断点和平面的关系
private:
	double x0,x1,x2;
	double y0,y1,y2;
	double z0,z1,z2;
	double a,b,c,d;
};

