#pragma once
#include<iostream>
using namespace std;


class plane
{
public:
	plane(void);
	~plane(void);
	void vm1();   //计算三个不共线的点所确定的平面
	void vm2();   //计算一个点和一个法向量所确定的平面
	void vm3();   //计算点到平面的距离
	void vm4();   //计算空间平面的单位法向量
	void vm5();   //判断平面和平面的关系
private:
	private:
	double x0,x1,x2,x3;
	double y0,y1,y2,y3;
	double z0,z1,z2,z3;
	double a,b,c,d;
	double a1,b1,c1,d1;
	double a2,b2,c2,d2;
};

