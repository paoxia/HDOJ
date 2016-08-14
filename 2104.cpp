#include<iostream>
using namespace std;

int gcd(int m,int n)
{
	if(m%n==0)
		return n;
	else
		return gcd(n,m%n);
}

int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(m==-1&&n==-1)	break;
		int temp;
		if(m<n)
		{
			temp=n;
			n=m;
			m=temp;
		}
		if(gcd(m,n)==1)	cout<<"YES"<<endl;
		else	cout<<"POOR Haha"<<endl;
		
	}
	
}