#include<iostream>
using namespace std;

int main()
{
	int k,t,sum,N;
	while(cin>>N&&N!=0)
	{
		t=0;
		sum=0;
		while(N--)
		{
			cin>>k;
			if(k-t>0)
				sum+=(k-t)*6+5;
			else
				sum+=(t-k)*4+5;
			t=k;
		}		
		cout<<sum<<endl;
	}
}