#include<stdio.h>

int main()
{
	int a,b,i,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=1;
		if(a==0&&b==0)
		break;
		else
		for(i=0;i<b;i++)
		{
			c=c%1000;
			c=c*a;
		}
		printf("%d\n",c%1000);
	}
}
