//line.cpp
#include "line.h"


line::line(void)
{
}


line::~line(void)
{
}

//������������ȷ����ֱ��
void line::vx1()
{
	cout<<"������A�����꣺"<<endl;
	cin>>x1>>y1>>z1;
	cout<<"������B�����꣺"<<endl;
	cin>>x2>>y2>>z2;
	cout<<"��ֱ�߷���Ϊ��"<<endl<<"(x-"<<x1<<")/"<<x2-x1<<"=(y-"<<y1<<")/"<<y2-y1<<"=(z-"<<z1<<")/"<<z2-z1<<endl;
}

//���������ཻ��ƽ����ȷ����ֱ��
void line::vx2()
{
	cout<<"ƽ�淽��Ϊ��a*x+b*y+c*z+d=0�������������һ��ƽ�淽����a1,b1,c1,d1��ֵ��"<<endl;
	cin>>a1>>b1>>c1>>d1;
	cout<<"ƽ�淽��Ϊ��a*x+b*y+c*z+d=0������������ڶ���ƽ�淽����a2,b2,c2,d2��ֵ��"<<endl;
	cin>>a2>>b2>>c2>>d2;
	cout<<"ֱ�߷���Ϊ��"<<a1-(a2*c1)/c2<<"*x+"<<b1-(b2*c1)/c2<<"*y+"<<d1-(d2*c1)/c2<<"=0"<<endl;
}

//����㵽ֱ�ߵľ���
void line::vx3()
{
	double OA,OB,AB,p,s;
	cout<<"����������һ��O�����꣺"<<endl;
	cin>>x0>>y0>>z0;
	cout<<"������ֱ����һ����A�����꣺"<<endl;
	cin>>x1>>y1>>z1;
	cout<<"������ֱ���ϲ�ͬ����һ�����һ����B�����꣺"<<endl;
	cin>>x2>>y2>>z2;
	OA=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)+(z0-z1)*(z0-z1));
	OB=sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2)+(z0-z2)*(z0-z2));
	AB=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
	p=(OA+OB+AB)/2;
	s=sqrt(p*(p-OA)*(p-OB)*(p-AB));
	cout<<"����Ϊ��"<<2*s/AB<<endl;
}

//����ռ�ֱ�ߵĵ�λ��������
void line::vx4()
{
	double a,b,c,d;
	cout<<"ƽ�淽��Ϊ��a*x+b*y+c*z+d=0�������������һ��ƽ�淽����a1,b1,c1,d1��ֵ��"<<endl;
	cin>>a1>>b1>>c1>>d1;
	cout<<"ƽ�淽��Ϊ��a*x+b*y+c*z+d=0������������ڶ���ƽ�淽����a2,b2,c2,d2��ֵ��"<<endl;
	cin>>a2>>b2>>c2>>d2;
	//����һ������������
	a=b1*c2-c1*b2;
	b=a2*c1-a1*c2;
	c=a1*b2-a2*b1;
	d=sqrt(a*a+b*b+c*c);
	cout<<"��λ��������Ϊ��"<<"("<<a/d<<","<<b/d<<","<<c/d<<")"<<endl;
}

//�ж��ߺ��ߵĹ�ϵ
void line::vx5()
{
	cout<<"������һ��ֱ�ߵķ���������"<<endl;
	cin>>x1>>y1>>z1;
	cout<<"��������һ��ֱ�ߵķ���������"<<endl;		
	cin>>x2>>y2>>z2;
	if(x1*x2+y1*y2+z1*z2==0)
		cout<<"��ֱ�ߴ�ֱ"<<endl;
	else if((x1/x2)==(y1/y2) &&(y1/y2)==(z1/z2))
		cout<<"��ֱ��ƽ��"<<endl;
	else
		cout<<"��ֱ���ཻ"<<endl;
}

//�ж��ߺ�ƽ��Ĺ�ϵ
void line::vx6()
{
	cout<<"������ֱ�ߵķ���������"<<endl;
	cin>>x1>>y1>>z1;
	cout<<"������ƽ��ķ�������"<<endl;
	cin>>x2>>y2>>z2;
	if(x1*x2+y1*y2+z1*z2==0)
		cout<<"ֱ����ƽ��ƽ��"<<endl;
	else if((x1/x2)==(y1/y2)&&(z1/z2)==(y1/y2))
		cout<<"ֱ����ƽ�洹ֱ"<<endl;
	else 
		cout<<"ֱ����ƽ���ཻ"<<endl;
}
