//point.cpp
#include "point.h"


point::point(void)
{
}


point::~point(void)
{
}

//��������֮��ľ���
void point::vd1()
{
	cout<<"������A�����꣺"<<endl;
	cin>>x1>>y1>>z1;
	cout<<"������B�����꣺"<<endl;
	cin>>x2>>y2>>z2;
	double AB;
	AB=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
	cout<<"����֮�����Ϊ��"<<AB<<endl;
}

//�жϵ���ߵĹ�ϵ
void point::vd2()
{
	cout<<"��������Ҫ�жϵĵ�����꣺"<<endl;
	cin>>x0>>y0>>z0;
	cout<<"�����������ڸ�ֱ���ϵĵ�����꣺"<<endl<<"A�����꣺"<<endl;
	cin>>x1>>y1>>z1;
	cout<<"B�����꣺"<<endl;
	cin>>x2>>y2>>z2;
	if(((x0-x1)/(x0-x2))==((y0-y1)/(y0-y2))&&((y0-y1)/(y0-y2))==((z0-z1)/(z0-z2)))
		cout<<"������ڸ�ֱ����"<<endl;
	else
		cout<<"����㲻�ڸ�ֱ����"<<endl;
}

//�жϵ��ƽ��Ĺ�ϵ
void point::vd3()
{
	cout<<"��������Ҫ�жϵĵ�����꣺"<<endl;
	cin>>x0>>y0>>z0;
	cout<<"ƽ�淽��Ϊ��a*x+b*y+c*z+d=0������������a,b,c,d��ֵ��"<<endl;
	cin>>a>>b>>c>>d;
	if((a*x0+b*y0+c*z0+d)==0)
		cout<<"������ڸ�ƽ����"<<endl;
	else
		cout<<"����㲻�ڸ�ƽ����"<<endl;
}