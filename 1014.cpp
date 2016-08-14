#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int gcd(int m,int n)
{
	if(m%n==0)
		return n;
	else return gcd(n,m%n);
}


int main()
{
	int Step,Mod;
	while(cin>>Step>>Mod)
	{
		cout<<setiosflags(ios::right)<<setw(10)<<Step;
		cout<<setiosflags(ios::right)<<setw(10)<<Mod<<"    ";
		if(gcd(Step,Mod)==1)	{cout<<"Good Choice"<<endl;cout<<endl;}
		else	{cout<<"Bad Choice"<<endl;cout<<endl;}
	}
}