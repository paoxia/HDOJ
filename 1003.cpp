#include<iostream>
using namespace std;

int main()
{
	int T,N,i,temp,j,k,sum,end,beg,max;
	while(cin>>T)
	{
		k=0;
		while(T--)
		{
			k++;
			sum=0;
			max=-1001;
			j=0;
			cin>>N;
			for(i=1;i<=N;i++)
			{
				cin>>temp;
				sum+=temp;
				j++;
				if(sum>max)
				{
					max=sum;
					beg=j;
					end=i;//
				}
				if(sum<0)
				{
					sum=0;
					j=0;
				}
			}
			cout<<"Case "<<k<<":"<<endl;
			cout<<max<<" "<<end-beg+1<<" "<<end<<endl;
			if(T!=0)
				cout<<endl;
		}
	}
}
