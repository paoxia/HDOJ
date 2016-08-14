#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000];

int main()
{
	int i,N;
	while(cin>>N)
	{
		for(i=0;i<N;i++)
		{
			cin>>a[i];
		}
		sort(a,a+N);
		cout<<a[(N-1)/2]<<endl;
	}
}