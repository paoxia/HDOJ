#include<stdio.h>
#include<math.h>
int main()
{
	int T;
	double ans;
	int h,m,s;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d%d",&h,&m,&s);
		if(h>=12)
			h=h-12;
		ans=fabs((h*30+0.5*m+0.00833*s)-(m*6+s*0.1));
		if(ans>180)
			printf("%d\n",(int)(360-ans));    
		else
			printf("%d\n",(int)ans);
	}
	return 0;
}