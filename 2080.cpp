#include<stdio.h>
#include<math.h>
#define Pi 3.141592653

int main()
{
	int T;
	double x1,y1,x2,y2,t,m;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		t=x1*x2+y1*y2;
		m=sqrt((x1*x1+y1*y1)*(x2*x2+y2*y2));
		printf("%.2lf\n",acos(t/m)/Pi*180);
		
	}
	
}