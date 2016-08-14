#include<iostream>
#include<string>
using namespace std;

void Print(int a[],int n)
{
	cout<<"a:"<<a[0]<<endl;
	cout<<"e:"<<a[1]<<endl;
	cout<<"i:"<<a[2]<<endl;
	cout<<"o:"<<a[3]<<endl;
	cout<<"u:"<<a[4]<<endl;
}
int main()
{
	int n,l,i,a[5];
	char s[100];
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		l=strlen(s);
		for(i=0;i<5;i++)
		{
			a[i]=0;
		}
		for(i=0;i<l;i++)
		{
			if(s[i]=='a')
			a[0]+=1;
			if(s[i]=='e')
			a[1]+=1;
			if(s[i]=='i')
			a[2]+=1;
			if(s[i]=='o')
			a[3]+=1;
			if(s[i]=='u')
			a[4]+=1;
		}
		if(n!=0)
		{
			Print(a,5);
			cout<<endl;
		}
		else
		Print(a,5);
	}
}