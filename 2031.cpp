#include<stdio.h> 
int main() 
{ 
    int n,m,i,j,f,p;
    char a[200];
    while(scanf("%d%d",&n,&m)!=EOF)
    { 
        i=0;
        p=0;
        if(n<0)
        {
            p=-1;
            n=-n;
        }
        while(n>0)
        {
            f=n%m;
            if(f>=10)
                a[i]=f-10+'A';
            else
                a[i]=f+'0';
            i++; 
            n/=m;
        }
        if(p==-1)
            printf("-");
        for(j=i-1;j>=0;j--)
            printf("%c",a[j]);
        printf("\n");
    } 
    return 0; 
}