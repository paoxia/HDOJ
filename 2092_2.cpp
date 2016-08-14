#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,m,i,k,count;
    while(cin>>n>>m)
    {
    	if(n==0&&m==0)
    	break;
        count=0;
        k=abs(m);
        for(i=-k;i<=k;i++)
        {
            if((n-i)*i==m)
            {
              cout<<"Yes"<<endl;
              count=1;
              break;
            }
        }
        if(count==0)
            cout<<"No"<<endl;
    }
    return 0;
}