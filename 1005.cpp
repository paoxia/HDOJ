#include<iostream>
using namespace std;

int main()
{
	int a[100],A,B,I,n;
	a[1]=1;
	a[2]=1;
	while(cin>>A>>B>>n)
	{
		if(A==0&&B==0&&n==0)	break;
		int cnt=0;
		for(i=3;i<=99;i++)
		{
			a[i]=(A*a[i-1]+B*a[i-2])%7;
			if(a[i]==1&&a[i-1]==1)	break;
			if(a[i]==0&&a[i-1]==0) {cnt=1;break;}
		}
		if(cnt&&n>i-2){cout<<"0"<<endl;continue;}
		i-=2;
		n%=i;
		if(n==0)n=i;
		cout<<a[n]<<endl;
	}
}
