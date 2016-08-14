#include<stdio.h>

int main()
{
	int Y,M,D,a[12],t,i;
	while(scanf("%d/%d/%d",&Y,&M,&D)!=EOF)
	{
		t=0;
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if((Y%100==0&&Y%400==0)||(Y%100!=0&&Y%4==0))
		a[1]=29;
		for(i=0;i<M-1;i++)
		{
			t+=a[i];
		}
		t=t+D;
		printf("%d\n",t);
	}
}