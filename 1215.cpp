#include<iostream>
using namespace std;

const int maxn=500000;
int a[maxn+1];

void selection()
{
	a[0]=a[1]=0;
	for(int i=1;i<=maxn/2;i++)
	{
		for(int j=i+i;j<=maxn;j+=i)
		{
			a[j]+=i;
		}
	}
}

int main()
{
	int T,N;
	cin>>T;
	selection();
	while(T--)
	{
		cin>>N;
		cout<<a[N]<<endl;
	}
}
