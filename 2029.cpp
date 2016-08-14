#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n,i,j,k,l;
	char s[200];
	cin>>n;
	getchar();
	while(n--)
	{
		k=1;		
		gets(s);
		l=strlen(s);

		for(i=0,j=l-1;i<=j;i++,j--)
		{
			if(s[i]!=s[j])
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