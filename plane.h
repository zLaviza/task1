#pragma once
#include<iostream>
using namespace std;


class plane
{
public:
	plane(void);
	~plane(void);
	void vm1();   //�������������ߵĵ���ȷ����ƽ��
	void vm2();   //����һ�����һ����������ȷ����ƽ��
	void vm3();   //����㵽ƽ��ľ���
	void vm4();   //����ռ�ƽ��ĵ�λ������
	void vm5();   //�ж�ƽ���ƽ��Ĺ�ϵ
private:
	private:
	double x0,x1,x2,x3;
	double y0,y1,y2,y3;
	double z0,z1,z2,z3;
	double a,b,c,d;
	double a1,b1,c1,d1;
	double a2,b2,c2,d2;
};

