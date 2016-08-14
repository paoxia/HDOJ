#include<iostream>
using namespace std;

int sum_10(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

int sum_16(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%16;
		n/=16;
	}
	return sum;
}

int sum_12(int n)
{
	int sum=0;
	while(n)
	{
		sum+=n%12;
		n/=12;
	}
	return sum;	
}

int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		if(sum_10(n)==sum_16(n)&&sum_10(n)==sum_12(n))
			cout<<n<<" is a Sky Number."<<endl;
		else
			cout<<n<<" is not a Sky Number."<<endl;
	}
}
