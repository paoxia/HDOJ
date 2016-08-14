#include<iostream>
#include<iomanip>
using namespace std;

double min(double a,double b)
{
	if(a<b) return a;
	else return b;
}

double max(double a,double b)
{
	if(a>b)	return a;
	else return b;
}


int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;
	double temp,area;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
	{
		if(x1>x2){temp=x1;x1=x2;x2=temp;}
		if(y1>y2){temp=y1;y1=y2;y2=temp;}
		if(x3>x4){temp=x3;x3=x4;x4=temp;}
		if(y3>y4){temp=y3;y3=y4;y4=temp;}	
		if(x4>x1&&x3<x2&&y2>y3&&y4>y1)
		{
			area=(min(x2,x4)-max(x1,x3))*(min(y2,y4)-max(y1,y3));		
		}
		else
			area=0;
		cout<<fixed<<setprecision(2)<<area<<endl;
	}
}