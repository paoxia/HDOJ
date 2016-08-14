#include<iostream>
using namespace std;

int main()
{
	int N,n,sum,k;
	cin>>N;
	while(N--)
	{
		sum=0;
		cin>>n;
		while(n--)
		{
			cin>>k;
			sum+=k;
		}
		cout<<sum<<endl;
	}
}