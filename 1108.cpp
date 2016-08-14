#include<iostream>
using namespace std;

int gcd(int m,int n)
{
	if(m%n==0)
		return n;
	else	return gcd(n,m%n);
}

int main()
{
	int m,n,temp;
	while(cin>>m>>n)
	{
		if(m<n)
		{
			temp=m;
			m=n;
			n=temp;
		}
		n=m*n/gcd(m,n);
		cout<<n<<endl;
	}
}