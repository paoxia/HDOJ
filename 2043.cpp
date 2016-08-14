#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,a,b,c,d,l,i;
	char s[100];
	cin>>n;
	getchar();
	while(n--)
	{
		gets(s);
		a=0;
		b=0;
		c=0;
		d=0;
		l=strlen(s);
		if(l>16||l<8)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			for(i=0;i<l;i++)
			{
				if(s[i]>='A'&&s[i]<='Z')
					a=1;
				if(s[i]>='a'&&s[i]<='z')
					b=1;
				if(s[i]>='0'&&s[i]<='9')
					c=1;
				if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='^')
					d=1;
			}
			if(a+b+c+d>=3)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
	}
	
}