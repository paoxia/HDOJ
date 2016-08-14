#include<iostream>
#include<iomanip>
using namespace std;

void ope_fun(char ope)
{
	int int1,int2;
	cin>>int1>>int2;
	if(ope=='+')
		cout<<int1+int2<<endl;
	if(ope=='-')
		cout<<int1-int2<<endl;
	if(ope=='*')
		cout<<int1*int2<<endl;;
	if(ope=='/')
	{	
		if(int1%int2==0)
			cout<<int1/int2<<endl;
		else
			cout<<setprecision(2)<<fixed<<double(int1)/double(int2)<<endl;
	}
}

int main()
{
	int T;
	char ope;
	while(cin>>T)
	{
		while(T--)
		{
			cin>>ope;
			ope_fun(ope);
		}
	}
}