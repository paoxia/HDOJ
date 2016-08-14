#include<iostream>
using namespace std;

int main()
{
	int n,ac_power,max;
	while(cin>>n)
	{
		max=0;
		if(n==0)	break;
		while(n--)
		{
			cin>>ac_power;
			if(ac_power>max)
				max=ac_power;
		}
		cout<<max<<endl;
	}	
}
