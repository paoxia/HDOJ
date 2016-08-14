#include<stdio.h> 
#include<string.h> 
int main() 
{ 
    int n,i,l,count; 
    char a[200]; 
    scanf("%d",&n); 
    getchar(); 
    while(n--) 
    {
        count=0; 
        gets(a); 
        l=strlen(a); 
        for(i=0;i<l;i++)
        { 
            if(a[i]<0)
                count++; 
        } 
        printf("%d\n",count/2); 
    } 
    return 0;
}