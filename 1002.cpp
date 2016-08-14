#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len1,len2,j,k,pi,t,flag;
    char str1[1010],str2[1010];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a[1200]={0};
        flag=0;
        printf("Case %d:\n",i);
        scanf("%s%s",str1,str2);
        len1=strlen(str1);
        len2=strlen(str2);
        printf("%s + %s = ",str1,str2);
        j=len1-1;
        k=len2-1;
        pi=0;
        while(j>=0&&k>=0)
        {
            if(a[pi]+(str1[j]-'0')+(str2[k]-'0')>=10)
            {
                a[pi]=a[pi]+(str1[j]-'0')+(str2[k]-'0')-10;
                a[pi+1]++;
            }
            else
                a[pi]=a[pi]+(str1[j]-'0')+(str2[k]-'0');
            pi++;
            k--;
            j--;
        }
        if(j>=0)
        {
            for(t=j;t>=0;t--)
            {
                a[pi]=a[pi]+(str1[t]-'0');
                pi++;
            }
        }
        else if(k>=0)
        {
            for(t=k;t>=0;t--)
            {
                a[pi]=a[pi]+str2[t]-'0';
                pi++;
            }
        }
        else if(a[pi]!=0)
            pi++;
        for(t=pi-1;t>=0;t--)
        {
            if(a[t]==0&&flag==0)
                continue;
            else
            {
                flag=1;
                printf("%d",a[t]);
            }
           
        }
        printf("\n");
        if(i!=n)
            printf("\n");
    }
    return 0;   
}