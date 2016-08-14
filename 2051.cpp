#include<iostream>
using namespace std;
int main()
{
	int i,a,b[20],j;
	while(cin>>a)
	{
		i=0;
		while(a!=0)
		{
			b[i]=a%2;
			i++;
			a=a/2;
		}
		for(j=i-1;j>=0;j--)
		{
			cout<<b[j];
		}
		cout<<endl;
	}
	
}