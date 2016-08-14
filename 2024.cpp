#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,l,i,k;
	char s[50];
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		l=strlen(s);
		if(!((s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z')||(s[0]=='_')))
		{
			cout<<"no"<<endl;
			continue;
		}
		else
		k=1;
		for(i=1;i<l;i++)
		{
			if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')||s[i]=='_'))
			{
				k=0;
				break;
			}
		}
		if(k==0)
			cout<<"no"<<endl;
		else 
			cout<<"yes"<<endl;
		
	}
}