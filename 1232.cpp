#include<stdio.h>

int set[1001];


int find(int x)
{
	int r=x;
	while(set[r]!=r)
	{
		r=set[r];
	}
	return r;
}

void merge(int x,int y)
{
	int fx,fy;
	fx=find(x);
	fy=find(y);
	if(fx!=fy)
		set[fx]=fy;
}

int main()
{
	int N,M;
	int x,y;
	int count;
	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)	break;
		else
			count=-1;
			for(int i=1;i<=N;i++)
			{
				set[i]=i;
			}
			scanf("%d",&M);
			for(int i=0;i<M;i++)
			{
				scanf("%d%d",&x,&y);
				merge(x,y);
			}
			for(int i=1;i<=N;i++)
			{
				if(set[i]==i)
					count++;
			}
			printf("%d\n",count);
	}
}
