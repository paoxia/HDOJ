#include<iostream>
using namespace std;

int main()
{
	int i=-1,j,n,a[60],sum,move;
	while(cin>>n&&n!=0)
	{
		if(n!=-1)
			cout<<endl;
		i=0;
		sum=0;
		move=0;
		while(n--)
		{
			cin>>a[i];
			sum+=a[i];
			i++;
		}
		sum=sum/i;
		for(j=0;j<i;j++)
		{
			if(a[j]>sum)
				move+=a[j]-sum;
		}
		cout<<move<<endl;		
	}	
}