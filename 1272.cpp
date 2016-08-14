#include<iostream>
using namespace std;

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
	if(fx==fy)
		return 0;
	else
		set[fx]=fy;
		return 1;
}

int main()
{
	int x,y,i;
	int flag;
	while(cin>>x>>y)
	{
		if(x<0||y<0)	break;
		if(x==0&&y==0)
		{
			cout<<"Yes"<<endl;
			continue;
		}
		for(i=1;i<100001;i++)
		{
			set[i]=i;
			visited[i]=0;
		}
		int n=1;
		merge(x,y);	
		flag=1;
		visited[x]=visited[y]=1;
		while(cin>>x>>y)
		{
			if(x==0&&y==0)	break;
			if(visited[x]==0){n++;visited[x]=1;}
			if(visited[y]==0){n++;visited[y]=1;}
			if(merge(x,y)==0)	flag=0;
			n--;
		}
		if(flag&&n==1)	cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}	
}

