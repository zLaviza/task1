#pragma once
#include<iostream>
using namespace std;


class line
{
public:
	line(void);
	~line(void);
	void vx1();   //计算两个点所确定的直线
	void vx2();   //计算两个相交的平面所确定的直线
	void vx3();   //计算点到直线的距离
	void vx4();   //计算空间直线的单位方向向量
	void vx5();   //判断线和线的关系
	void vx6();   //判断线和平面的关系
private:
	double x0,x1,x2;
	double y0,y1,y2;
	double z0,z1,z2;
	double a1,b1,c1,d1;
	double a2,b2,c2,d2;
};

