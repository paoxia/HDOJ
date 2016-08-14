#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int N,M,i,j;
	while(cin>>N>>M)
	{
		if(N==0&&M==0)
			break;
		for(j=sqrt(2.0*M);j>0;j--)
		{
			i=(2*M/j+1-j)/2;
			if((2*i+j-1)*j/2==M)
				cout<<"["<<i<<","<<i+j-1<<"]"<<endl;
		}
		cout<<endl;
	}
}