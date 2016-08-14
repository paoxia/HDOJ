#include<iostream>
using namespace std;

int ss(int a)
{
	int sum=0,i;
	for(i=1;i<=a/2;i++)
	{
		if(a%i==0)
		sum+=i;
	}
	return sum;
}

int main()
{
	int A,B,M,c,d;
	cin>>M;
	while(M--)
	{
		cin>>A>>B;
		if(ss(A)==B&&ss(B)==A)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}