#include<iostream>
using namespace std;

int gcd(int m,int n)
{
	int t;
	if(m<n)
	{
		t=m;
		m=n;
		n=t;
	}
	t=m;
	while(t%n!=0)
	{
		t=m+t;
	}
	return t;
}


int main()
{
	int n,i,k,t;
	while(cin>>n)
	{
		t=1;
		for(i=0;i<n;i++)
		{
			cin>>k;
			t=gcd(k,t);
		}
		cout<<t<<endl;
	}

	
}