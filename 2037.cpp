#include<stdio.h> 
 
int main() 
{
    int n,i,j,count,t,v,begin[100],end[100];
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        count=1;
        for(i=0;i<n;i++)
            scanf("%d%d",&begin[i],&end[i]);
        for(i=0;i<n-1;i++)
            for(j=0;j<n-1-i;j++)
                if(end[j]>end[j+1])
                {
                    t=end[j];
                    v=begin[j];
                    end[j]=end[j+1];
                    begin[j]=begin[j+1];
                    end[j+1]=t;
					begin[j+1]=v; 
                }
        t=end[0];
        for(i=1;i<n;i++)
        {
            if(begin[i]>=t)
            {
                count++;
                t=end[i];
            }
        }
        printf("%d\n",count);
    }
    return 0; 
}