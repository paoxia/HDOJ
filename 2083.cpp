#include<iostream>  
#include<algorithm> 
#include<math.h> 
using namespace std;  
int main()  
{  
    int m,n,i,distance,point[500];  
    cin>>m;  
    while(m--)  
    {  
        distance=0;  
        cin>>n;  
        for(i=0;i<n;i++)  
            cin>>point[i];  
        sort(point,point+n);  
        for(i=0;i<n;i++)  
            distance+=abs(point[i]-point[n/2]);  
        cout<<distance<<endl;  
    }  
    return 0;  
}  