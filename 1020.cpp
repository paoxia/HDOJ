#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N,count,len;
	char str[10001];
	cin>>N;
	getchar();
	while(N--)
	{
		int i;
		gets(str);
		len=strlen(str);
		count=1;
		for(i=0;i<len;i++)
		{
			if(str[i]==str[i+1])	count++;
			else
			{
				if(count==1)
					cout<<str[i];
				else
				{
					cout<<count<<str[i];
					count=1;
				}
			}			
		}
		cout<<endl;
		
	}
}