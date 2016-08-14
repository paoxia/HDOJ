//HDOJ_2199
//20150916

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


double f(double x)
{
	return 8*pow(x,4)+7*pow(x,3)+2*pow(x,2)+3*pow(x,1)+6;
}


int main()
{
	int T;
	double Y,l,r,m;
	cin>>T;
	while(T--)
	{
		cin>>Y;
		if(f(0)<=Y&&f(100)>=Y)
		{
			l=0;
			r=100;
			while(l-r<-1e-6)
			{
				m=(l+r)/2;
				double ans=f(m);
				if(ans>Y)
					r=m-(1e-7);
				else
					l=m+(1e-7);
			}
			cout<<fixed<<setprecision(4)<<(l+r)/2<<endl;
		}
		else
			cout<<"No solution!"<<endl;
	}
	
}
