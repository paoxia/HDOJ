#include<iostream>
#include<string.h>
using namespace std;


int main()
{
	int count;
	char str[1001],str1[1001];
	char *s,*s1;
	int len,len1;
	while(cin>>str)
	{
		if(str[0]=='#')	break;
		cin>>str1;
		count=0;
		len1=strlen(str1);
		s=str;
		while((s1=strstr(s,str1))!=0)
		{
			count++;
			s=s1+len1;
		}
		cout<<count<<endl;
	}
}

