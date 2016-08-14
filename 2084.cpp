#include<iostream>
using namespace std;

int main()
{
	int c,a[120][120],n,i,j;
	cin>>c;
	while(c--)
	{
		cin>>n;
		for (i=1;i<=n;i++) 
		{
			for (j=1;j<=i;j++)
			{
				cin>>a[i][j];
			}
		}
		for (i=n-1;i>0;i--)
		{
			for (j=1;j<=i;j++)
			{
				if(a[i+1][j]>=a[i+1][j+1])
					a[i][j]+=a[i+1][j];
				else	a[i][j]+=a[i+1][j+1];
			}
		}
		cout<<a[1][1]<<endl;
	 }
}