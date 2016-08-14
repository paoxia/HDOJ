#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int dp[50][50];
int num[50][50];


int main()
{
	int N,K;
	int temp;
	while(cin>>N>>K)
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<K;j++)
			{
				cin>>num[i][j];
			}
		}
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<K;j++)
			{
				dp[i][j]=99999999;
			}
		}
		for(int j=0;j<K;j++)
		{
			dp[0][j]=0;
		}
		for(int i=1;i<N;i++)
		{
			for(int j=0;j<K;j++)
			{
				for(int k=0;k<K;k++)
				{
					dp[i][j]=min(dp[i][j],dp[i-1][k]+abs(num[i][j]-num[i-1][k]));
				}
			}	
		}
		temp=dp[N-1][0];
		for(int i=1;i<K;i++)
		{
			if(temp>dp[N-1][i])
				temp=dp[N-1][i];			
		}
		cout<<temp<<endl;
	}
	//return 0;
}
