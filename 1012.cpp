#include<iostream>
#include<iomanip>
using namespace std;

int factorial(int i)
{
	if(i==0||i==1)
		return 1;
	return i*factorial(i-1);
	
}

int main()
{
	double sum=2.5;
	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;
	cout<<"0 1"<<endl;
	cout<<"1 2"<<endl;
	cout<<"2 2.5"<<endl;
	for(int i=3;i<=9;i++)
	{
		cout<<i<<" ";
		sum+=1.0/factorial(i);
		cout<<setprecision(9)<<fixed<<sum<<endl;
	}
}