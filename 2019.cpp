#include<stdio.h>
int main()
{
	int m,n,i,s[100];
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		if(m==0&&n==0)
			break;
		for(i=0;i<n;i++)
		scanf("%d",&s[i]);
		if(m>s[n-1])
		s[n]=m;
		else
		{
			i--;
			while(s[i]>m)
			{
				s[i+1]=s[i];
				i--;
			}
			s[i+1]=m;
		}
		for(i=0;i<=n;i++)
		{
			printf("%d",s[i]);
			if(i<n)
			printf(" ");
			else
			printf("\n");
		}
	}
	return 0;
}