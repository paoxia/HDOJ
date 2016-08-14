#include<iostream>
using namespace std;

int main()
{
	int n,s,i,k;
	while(cin>>n&&n!=0)
	{
		s=0;
		for(i=0;i<n;i++)
		{
			cin>>k;
			s^=k;
		}
		cout<<s<<endl;
	}
}