//plane.cpp
#include "plane.h"


plane::plane(void)
{
}


plane::~plane(void)
{
}

//计算三个不共线的点所确定的平面
void plane::vm1()
{
	cout<<"请输入A点坐标："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入B点坐标："<<endl;
	cin>>x2>>y2>>z2;
	cout<<"请输入C点坐标："<<endl;
	cin>>x3>>y3>>z3;
	cout<<"该平面方程为："<<endl;
	cout<<"("<<(y2-y1)*(z3-z1)<<")*(x-"<<x1<<")+("<<(x2-x1)*(y3-y1)<<")*(z-"<<z1<<")+("<<(x3-x1)*(z2-z1)<<")*(y-"<<y1<<")-("<<(y2-y1)*(x3-x1)<<")*(z-"<<z1<<")-("<<(x2-x1)*(z3-z1)<<")*(y-"<<y1<<")-("<<(z2-z1)*(y3-y1)<<")*(x-"<<x1<<")"<<"=0"<<endl;
}

//计算一个点和一个法向量所确定的平面
void plane::vm2()
{
	cout<<"请输入平面上一点："<<endl;
	cin>>x1>>y1>>z1;
	cout<<"请输入平面的法向量："<<endl;
	cin>>x2>>y2>>z2;
	cout<<"形成的平面方程："<<endl;
	cout<<x2<<"*(x-"<<x1<<")+"<<y2<<"*(y-"<<y1<<")+"<<z2<<"(z-"<<z1<<")"<<endl;
}

//计算点到平面的距离
void plane::vm3()
{
	cout<<"请输入点的坐标："<<endl;
	cin>>x0>>y0>>z0;
	cout<<"请输入面的系数："<<endl;
	cin>>a>>b>>c>>d;
	cout<<"点到面的距离是："<<(a*x0+b*y0+c*z0+d)/(sqrt(a*a+b*b+c*c+d*d))<<endl;
}

//计算空间平面的单位法向量
void plane::vm4()
{
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入a,b,c,d的值："<<endl;
	cin>>a>>b>>c>>d;
	x0=1;
	y0=(b+d)/a;
	z0=-((c*(d-2*a+b))/(a*(d+2*a+b)));
	cout<<"该平面法向量为："<<"("<<x0<<","<<y0<<","<<z0<<")"<<endl;
}

//判断平面和平面的关系
void plane::vm5()
{
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入第一个平面方程中a1,b1,c1,d1的值："<<endl;
	cin>>a1>>b1>>c1>>d1;
	cout<<"平面方程为：a*x+b*y+c*z+d=0；请依次输入第二个平面方程中a2,b2,c2,d2的值："<<endl;
	cin>>a2>>b2>>c2>>d2;
	//平面①的法向量：
	x1=1;
	y1=(b1+d1)/a1;
	z1=-((c1*(d1-2*a1+b1))/(a1*(d1+2*a1+b1)));
	//平面②的法向量：
	x2=1;
	y2=(b2+d2)/a2;
	z2=-((c2*(d2-2*a2+b2))/(a2*(d2+2*a2+b2)));
	if(a1/a2==b1/b2&&b1/b2==c1/c2)
		cout<<"这两个平面平行"<<endl;
	else if(x1*x2+y1*y2+z1*z2==0)
		cout<<"这两个平面垂直"<<endl;
	else
		cout<<"这两个平面相交"<<endl;
}
