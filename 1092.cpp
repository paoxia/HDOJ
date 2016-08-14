#include<iostream>
using namespace std;

int main()
{
	int N,n,sum,k;
	while(cin>>N)
	{
		if(N==0)  break;
		sum=0;
		while(N--)
		{
			cin>>k;
			sum+=k;
		}
		cout<<sum<<endl;
	}
}