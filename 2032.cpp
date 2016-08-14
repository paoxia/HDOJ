#include<stdio.h>
int main()
{
	int n,i,j,s[30][30];
	while(scanf("%d",&n)!=EOF)
	{
 		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(j==0||i==j)
					s[i][j]=1;
				else
					s[i][j]=s[i-1][j-1]+s[i-1][j];
 			}
  		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%d",s[i][j]);
				if(j<i)
					printf(" ");
				else
					printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}