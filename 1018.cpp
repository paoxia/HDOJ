#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,m,i;
	double sum;
	while(cin>>n)
	{
		while(n--)
		{
			cin>>m;
			sum=0;
			for(i=1;i<=m;i++)
				sum=sum+log10((double)i);
			cout<<(int)sum+1<<endl;
		}
	}

}