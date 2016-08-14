#include<stdio.h>

int main()
{
	int n,i,num;
	while(scanf("%d",&n)!=EOF)
	{
		num=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
				num++;
		}
		if(num%2==0)
			printf("0\n");
		else
			printf("1\n");	
	}
}