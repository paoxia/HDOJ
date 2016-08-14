#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a[3004],c[3004],sum;
	int n,i,j;
	while(cin>>n)
	{
		cin>>a[0]>>a[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>c[i];
		}
		sum=0;
		for(i=i-1,j=1;i>=0;i--,j++)
		{
			sum-=2*i*c[j]/(n+1);
		}
		sum+=(n*a[0]+a[n+1])/(n+1);
		cout<<setprecision(2)<<fixed<<sum<<endl;
	}
}