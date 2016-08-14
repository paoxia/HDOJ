#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

double y;
const double eq=1e-6;

double cal(double x)
{
	return 42*pow(x,6)+48*pow(x,5)+21*pow(x,2)+10*x-y;
}

double F(double x)
{
	return 6*pow(x,7)+8*pow(x,6)+7*pow(x,3)+5*pow(x,2)-y*x;
}

int main()
{
	int T;
	cin>>T;
	double l,r,mid;
	while(T--)
	{
		cin>>y;
		if(cal(100)<=0.0)
			cout<<setprecision(4)<<fixed<<F(100)<<endl;
		else
			l=0.0;
			r=100.0;
			while(r-l>eq)
			{
				mid=(l+r)/2;
				if(cal(mid)<=0.0)
				{
					l=mid;
				}
				else
				{
					r=mid;
				}
			}
			cout<<setprecision(4)<<fixed<<F(mid)<<endl;
	}
	
}
