#include <iostream>  
using namespace std;  
int main()  
{  
    char ch;  
    int n,i=0,j;  

    while(cin>>ch&&ch!='@'){  
        cin>>n;  
        if(i!=0)
			cout<<endl;  
        for(i=1;i<n;i++)
			cout<<" ";  
        cout<<ch<<endl;  
        for(i=2;i<n;i++)
		{  
            for(j=1;j<=n-i;j++)
				cout<<" ";  
            cout<<ch;  
           	for(j=1;j<=2*i-3;j++)
				cout<<" ";  
   			cout<<ch<<endl;  
        }  
        if(n!=1)  
        {  
            for(i=1;i<=2*n-1;i++)
			cout<<ch;  
            cout<<endl;  
        }  
    }  
}