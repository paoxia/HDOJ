#include<iostream>
using namespace std;

int main()
{
	int a[20],n,i;
	a[1]=7%3;
	a[2]=11%3;
	for(i=3;i<20;i++)
	{
		a[i]=(a[i-1]+a[i-2])%3;
	}
	while(cin>>n)
	{
		for(i=3;i<20;i++)
		{
			if(a[i]==a[1]&&a[i+1]==a[2])
				break;
		}
		i=i-1;
		n=n+1;
		n=n%i;
		if(n==0)
			n=i;
		if(a[n]%3==0)
			cout<<"yes"<<endl;
		if(a[n]%3!=0)
			cout<<"no"<<endl;
	}
}