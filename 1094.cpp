#include<iostream>
using namespace std;

int main()
{
	int N,sum,k;
	while(cin>>N)
	{
		sum=0;
		while(N--)
		{
			cin>>k;
			sum+=k;
		}
		cout<<sum<<endl;
	}
}