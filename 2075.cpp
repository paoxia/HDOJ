#include<iostream>
using namespace std;

int main()
{
	int n,A,B;
	cin>>n;
	while(n--)
	{
		cin>>A>>B;
		if(A%B==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	} 
}