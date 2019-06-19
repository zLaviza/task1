//line.cpp
#include "line.h"


line::line(void)
{
}


line::~line(void)
{
}

//计算两个点所确定的直线
void line::vx1()
{
	cout<<"请输入A点坐标："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入B点坐标："<<endl;
	cin>>x2>>y2>>z2;
	cout<<"该直线方程为："<<endl<<"(x-"<<x1<<")/"<<x2-x1<<"=(y-"<<y1<<")/"<<y2-y1<<"=(z-"<<z1<<")/"<<z2-z1<<endl;
}

//计算两个相交的平面所确定的直线
void line::vx2()
{
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入第一个平面方程中a1,b1,c1,d1的值："<<endl;
	cin>>a1>>b1>>c1>>d1;
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入第二个平面方程中a2,b2,c2,d2的值："<<endl;
	cin>>a2>>b2>>c2>>d2;
	cout<<"直线方程为："<<a1-(a2*c1)/c2<<"*x+"<<b1-(b2*c1)/c2<<"*y+"<<d1-(d2*c1)/c2<<"=0"<<endl;
}

//计算点到直线的距离
void line::vx3()
{
	double OA,OB,AB,p,s;
	cout<<"请输入任意一点O的坐标："<<endl;
	cin>>x0>>y0>>z0;
	cout<<"请输入直线上一个点A的坐标："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入直线上不同于上一点的另一个点B的坐标："<<endl;
	cin>>x2>>y2>>z2;
	OA=sqrt((x0-x1)*(x0-x1)+(y0-y1)*(y0-y1)+(z0-z1)*(z0-z1));
	OB=sqrt((x0-x2)*(x0-x2)+(y0-y2)*(y0-y2)+(z0-z2)*(z0-z2));
	AB=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
	p=(OA+OB+AB)/2;
	s=sqrt(p*(p-OA)*(p-OB)*(p-AB));
	cout<<"距离为："<<2*s/AB<<endl;
}

//计算空间直线的单位方向向量
void line::vx4()
{
	double a,b,c,d;
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入第一个平面方程中a1,b1,c1,d1的值："<<endl;
	cin>>a1>>b1>>c1>>d1;
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入第二个平面方程中a2,b2,c2,d2的值："<<endl;
	cin>>a2>>b2>>c2>>d2;
	//任意一个方向向量：
	a=b1*c2-c1*b2;
	b=a2*c1-a1*c2;
	c=a1*b2-a2*b1;
	d=sqrt(a*a+b*b+c*c);
	cout<<"单位方向向量为："<<"("<<a/d<<","<<b/d<<","<<c/d<<")"<<endl;
}

//判断线和线的关系
void line::vx5()
{
	cout<<"请输入一条直线的方向向量："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入另一条直线的方向向量："<<endl;		
	cin>>x2>>y2>>z2;
	if(x1*x2+y1*y2+z1*z2==0)
		cout<<"两直线垂直"<<endl;
	else if((x1/x2)==(y1/y2) &&(y1/y2)==(z1/z2))
		cout<<"两直线平行"<<endl;
	else
		cout<<"两直线相交"<<endl;
}

//判断线和平面的关系
void line::vx6()
{
	cout<<"请输入直线的方向向量："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入平面的法向量："<<endl;
	cin>>x2>>y2>>z2;
	if(x1*x2+y1*y2+z1*z2==0)
		cout<<"直线与平面平行"<<endl;
	else if((x1/x2)==(y1/y2)&&(z1/z2)==(y1/y2))
		cout<<"直线与平面垂直"<<endl;
	else 
		cout<<"直线与平面相交"<<endl;
}
