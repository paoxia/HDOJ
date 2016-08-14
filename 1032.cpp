#include<iostream>
using namespace std;

int Cycle_length(int i)
{
	int cycle_length=1;
	while(i!=1)
	{
		if(i%2==0)
			i=i/2;
		else i=3*i+1;
		cycle_length++;
	}
	return cycle_length;
}

int main()
{
	int begin,end,i,Cycle_length_max;
	while(cin>>begin>>end)
	{
		int t;
		cout<<begin<<" "<<end<<" ";
		if(begin>end)
		{
			t=end;
			end=begin;
			begin=t;
		}
		Cycle_length_max=0;
		for(i=begin;i<=end;i++)
		{
			if(Cycle_length(i)>Cycle_length_max)
				Cycle_length_max=Cycle_length(i);			
		}
		cout<<Cycle_length_max<<endl;
	}
}