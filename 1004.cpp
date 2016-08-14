#include<iostream>
#include<string>
using namespace std;

int main()
{
	int N,i,j,count,max,color;
	char a[1001][16];
	while(cin>>N&&N!=0)
	{
		getchar();
		max=1;
		for(i=0;i<N;i++)
		{
			gets(a[i]);
		}
		for(i=0;i<N;i++)
		{
			count=1;
			if(a[i][0]=='\0')
				continue;
			for(j=i+1;j<N;j++)
			{
				if(a[j][0]=='\0')
					continue;
				if(strcmp(a[i],a[j])==0)
				{
					count++;
					a[j][0]='\0';
				}
			}
			if(count>max)
			{
				max=count;
				color=i;
			}
		
		}
		puts(a[color]);
			
	}
}