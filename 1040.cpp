#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int T,N,i,num[1001];
	
	cin>>T;
	while(T--)
	{
		cin>>N;
		i=0;
		for(i=0;i<N;i++)
		{
			cin>>num[i];
		}
		sort(num,num+N);
		for(i=0;i<N;i++)
		{
			if(i!=N-1)
				cout<<num[i]<<" ";
			else
			cout<<num[i]<<endl;
		}
	}
	
}