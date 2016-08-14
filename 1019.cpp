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
	int temp,m,n,N,m1;
	cin>>N;	
	while(N--)
	{
		cin>>n>>m1;
		m=m1;
		n=n-1;
		while(n--)
		{
			cin>>m1;
			if(m<m1)
			{
				temp=m1;
				m1=m;
				m=temp;
			}
			m=m/gcd(m,m1)*m1;
		}
		cout<<m<<endl;
	}	
}