#include<iostream>
#include<math.h>
using namespace std;

int is_primer(int x)
{
	int y=sqrt(x);
	int i;
	for(i=2;i<=y;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}


int main()
{
	int num,i;
	int count;
	while(cin>>num)
	{
		if(num==0)	break;
		count=0;
		for(i=2;i<num/2;i++)
		{
			if(is_primer(i)&&is_primer(num-i))
				count++;
		}
		cout<<count<<endl;
	}
}
