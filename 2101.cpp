#include<iostream>
using namespace std;

int main()
{
	int A,B;
	while(cin>>A>>B)
	{
		if((A+B)%86==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}