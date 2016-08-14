#include<stdio.h>
#include<math.h>

double answer(int x,int y){
    double t=sqrt(2);
    double ans=0;
    int i;
    for(i=1;i<x+y;i++)
        ans+=t*i;
    ans+=t*x;
    for(i=0;i<x+y;i++)
        ans+=sqrt(i*i+(i+1)*(i+1));
    return ans;
}

int main()
{
    int N;
    int x1,y1,x2,y2;
    scanf("%d",&N);
    while(N--)
	{
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%.3lf\n",fabs(answer(x1,y1)-answer(x2,y2)));
    }
    return 0;
}
