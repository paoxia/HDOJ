#include<stdio.h>
#include<string.h> 
int main() 
{ 
    char a[100],t; 
    int i,l; 
    while(gets(a)) 
    {
        t='\0'; 
        l=strlen(a);
        for(i=0;i<l;i++)
            if(a[i]>t)
                t=a[i];
        for(i=0;i<l;i++)
            if(a[i]==t)
                 printf("%c(max)",a[i]);
            else 
                 printf("%c",a[i]); 
        printf("\n");
    }
    return 0; 
}