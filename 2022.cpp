#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,j,l,k,n,t,m,a[100][100];
	while(cin>>n>>m)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		t=abs(a[0][0]);
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(t<abs(a[i][j]))
				{
					t=abs(a[i][j]);
					l=i;
					k=j;
				}
			}
		}
		cout<<l+1<<" "<<k+1<<" "<<a[l][k]<<endl;
	}
	
}