#include<iostream>
using namespace std;

int main()
{
	int n,m,i=-1,j,b,c,l;
	char a[80][80],x,y;
	while(cin>>n>>x>>y)
	{
		if(i!=-1)
			cout<<endl; 
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=y;
			}
		}
		l=4;
		b=c=n/2-2;
		if(n==1)
		{
			cout<<x<<endl;
			continue;
		}
        for(i=0;i<n/4;i++)
        {  
            for(j=0;j<l;j++)  
            {  
                a[b][c]=x;  
                c++;  
            }  
            for(j=0;j<l;j++)  
            {  
                a[b][c]=x;  
                b++;  
            }  
            for(j=0;j<l;j++)  
            {  
                a[b][c]=x;  
                c--;  
            }  
            for(j=0;j<l;j++)  
            {  
                a[b][c]=x;  
                b--;  
            }  
            b-=2;c-=2;l+=4;  
        }  
        a[0][0]=a[0][n-1]=a[n-1][0]=a[n-1][n-1]=' ';  
        a[n/2][n/2]=x; 
        for(i=0;i<n;i++)  
        {  
            for(j=0;j<n;j++)  
            {
				cout<<a[i][j];
            }
            cout<<endl;  
        }  
    } 	
		
}
