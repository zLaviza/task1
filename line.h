#pragma once
#include<iostream>
using namespace std;


class line
{
public:
	line(void);
	~line(void);
	void vx1();   //������������ȷ����ֱ��
	void vx2();   //���������ཻ��ƽ����ȷ����ֱ��
	void vx3();   //����㵽ֱ�ߵľ���
	void vx4();   //����ռ�ֱ�ߵĵ�λ��������
	void vx5();   //�ж��ߺ��ߵĹ�ϵ
	void vx6();   //�ж��ߺ�ƽ��Ĺ�ϵ
private:
	double x0,x1,x2;
	double y0,y1,y2;
	double z0,z1,z2;
	double a1,b1,c1,d1;
	double a2,b2,c2,d2;
};

