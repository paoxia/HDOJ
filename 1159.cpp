#include<stdio.h>
#include<string.h>
char a[2015];
char b[2015];
int c[2015][2015];

int main()
{
	int m,n;
	while(scanf("%s%s",a,b)!=EOF)
	{
		m=strlen(a);
		n=strlen(b);
		for(int i=0;i<=m;i++)
		{
			c[i][0]=0;
		}
		for(int i=0;i<=n;i++)
		{
			c[0][i]=0;
		}
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(a[i-1]==b[j-1])
					c[i][j]=c[i-1][j-1]+1;
				else
					if(c[i][j-1]>=c[i-1][j])
						c[i][j]=c[i][j-1];
				else
					c[i][j]=c[i-1][j];
			}
		}
		printf("%d\n",c[m][n]);
	}
}
