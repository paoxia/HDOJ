#include<iostream>
using namespace std;

int main()
{
	int j,a,b,c,i,d[100];
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		break;

		c=0;
		for(i=0;i<100;i++)
		{
			d[i]=0;
		}
		c=a*100;
		i=0;
		for(c=a*100;c<=(a*100+99);c++)
		{
			if(c%b==0)
			{
				d[i]=c%100;
				i++;
			}
		}
		for(j=0;j<i-1;j++)
		{
			if(d[j]<10)
			cout<<"0"<<d[j]<<" ";
			else 
			cout<<d[j]<<" ";
		}
		if(d[i-1]<10)
			cout<<"0"<<d[i-1];
		else 
			cout<<d[i-1];
		cout<<endl;
	}
}