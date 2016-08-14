#include<stdio.h>

int set[100001];
int visited[100001];


int find(int x)
{
	int r=x;
	while(set[r]!=r)
		r=set[r];
	return r;
}

int merge(int x,int y)
{
	int fx,fy;
	fx=find(x);
	fy=find(y);
	if(fx==fy)	return 0;
	else
		set[fx]=fy;
		return 1;
}


int main()
{
	int i,n,Case=1;
	int x,y;
	int flag;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		flag=1;
		if(x<0||y<0)	break;
		if(x==0&&y==0)	
			{printf("Case %d is a tree.\n",Case++);continue;}
		for(i=1;i<100001;i++)
		{
			set[i]=i;
			visited[i]=0;
		}	
		n=1;
		merge(x,y);
		visited[x]=visited[y]=1;
		while(scanf("%d%d",&x,&y)!=EOF)
		{
			if(x==0&&y==0)	break;
			if(visited[x]==0){n++;visited[x]=1;}
			if(visited[y]==0){n++;visited[y]=1;}
			if(merge(x,y)==0)flag=0;
			n--;
		}
		if(flag&&n==1)	printf("Case %d is a tree.\n",Case++);
		else
			printf("Case %d is not a tree.\n",Case++);
	}
}
