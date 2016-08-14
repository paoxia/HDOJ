#include<iostream>
using namespace std;


int main()
{
	long long int high_power[34],low_power[34];
	int n;
	high_power[0]=1;
	low_power[0]=0;
	for(int i=1;i<34;i++)
	{
		high_power[i]=3*high_power[i-1]+2*low_power[i-1];
		low_power[i]=high_power[i-1]+low_power[i-1];
	}
	while(cin>>n)
	{
		if(n==-1)	break;
		else
			cout<<high_power[n]<<", "<<low_power[n]<<endl;
	}
}
