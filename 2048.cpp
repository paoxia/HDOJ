#include<iostream>
using namespace std; 
int main() 
{ 
    int n,m,i;
    __int64 a[22]={0,0,1,2};
    double s;
    for(i=4;i<=20;i++)
        a[i]=(i-1)*(a[i-1]+a[i-2]); 
    cin>>n;
    while(n--)
    {
        s=1;
        cin>>m; 
        for(i=1;i<=m;i++) 
            s*=i;
        cout.precision(2); 
        cout<<fixed<<((a[m]*1.0)/s)*100<<"%"<<endl;
    }
    return 0;
}
