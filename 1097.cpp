#include<iostream>
using namespace std;

int main()
{
	int i,d[10];
	long long a,b;
	while(cin>>a>>b)
	{
		for(i=0;i<=9;i++)
		{
			d[i]=1;
		}
		d[1]=a%10;
		for(i=2;i<=9;i++)
		{
			d[i]=d[i-1]*a%10;
			if(d[i]==(a%10))  break;
		}
		i=i-1;
		b%=i;
		if(b==0) b=i;
		cout<<d[b]<<endl;
	}
}