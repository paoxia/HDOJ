#include<stdio.h>

int main()
{
	int i,j,n,t=0;
	__int64 a[40][40];
	while(scanf("%d",&n)!=EOF&&n!=-1)
	{
		t++;
		a[0][0]=1;
		for(i=1;i<=n;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(j==0)
					a[i][j]=a[i-1][j];
				if(i==j)
					a[i][j]=a[i][j-1];
				else
				a[i][j]=a[i-1][j]+a[i][j-1];
			}
		}
		printf("%d %d %I64d\n",t,n,a[n][n]*2);
	}
}