#include<stdio.h>
#include<string>
int main()
{
	char integer[1000];
	int add,i,len;
	while(scanf("%s",integer)!=EOF&&integer[0]!='0')
	{
		len=strlen(integer);
		add=0;
		for(i=0;i<len;i++)
			add+=integer[i]-'0';
		printf("%d\n",add%9==0?9:add%9);
	}
}