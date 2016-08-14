#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,m,i,y,t,exist;
	while(cin>>n>>m)
	{
		exist=0;
		if(n==0&&m==0)
		break;
		if(m==0&&n!=0)
		{
			cout<<"Yes"<<endl;
			continue;
		}
		t=abs(m);
		for(i=-t;i<=t;i++)
		{
			if(i==0)
			continue;
			if(m%i==0)
			{
				y=m/i;
				if(i+y==n)
				{
					exist=1;	
					break;
				}
			}
		}
		if(exist==1)
	 		cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		
		
	}
}