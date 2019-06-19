//point.cpp
#include "point.h"


point::point(void)
{
}


point::~point(void)
{
}

//计算两点之间的距离
void point::vd1()
{
	cout<<"请输入A点坐标："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入B点坐标："<<endl;
	cin>>x2>>y2>>z2;
	double AB;
	AB=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
	cout<<"两点之间距离为："<<AB<<endl;
}

//判断点和线的关系
void point::vd2()
{
	cout<<"请输入需要判断的点的坐标："<<endl;
	cin>>x0>>y0>>z0;
	cout<<"请输入两个在该直线上的点的坐标："<<endl<<"A点坐标："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"B点坐标："<<endl;
	cin>>x2>>y2>>z2;
	if(((x0-x1)/(x0-x2))==((y0-y1)/(y0-y2))&&((y0-y1)/(y0-y2))==((z0-z1)/(z0-z2)))
		cout<<"这个点在该直线上"<<endl;
	else
		cout<<"这个点不在该直线上"<<endl;
}

//判断点和平面的关系
void point::vd3()
{
	cout<<"请输入需要判断的点的坐标："<<endl;
	cin>>x0>>y0>>z0;
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入a,b,c,d的值："<<endl;
	cin>>a>>b>>c>>d;
	if((a*x0+b*y0+c*z0+d)==0)
		cout<<"这个点在该平面上"<<endl;
	else
		cout<<"这个点不在该平面上"<<endl;
}