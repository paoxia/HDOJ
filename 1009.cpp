#include<iostream>
#include<algorithm>
using namespace std;

struct trade
{
	double j,f,div;
}num[1001];

bool cmp(const struct trade &a,const struct trade &b)  
{  
    return b.div>a.div;  
} 

int main()
{
	int M,N,i,j;
	double sum;
	while(cin>>M>>N)
	{
		if(M==-1&&N==-1)	break;
		sum=0;
		i=0;
		for(i=0;i<N;i++)
		{
			cin>>num[i].j>>num[i].f;
			num[i].div=num[i].f/num[i].j;			
		}
		sort(num,num+N,cmp);
		for(i=0;i<N;i++)
		{
			if(M-num[i].f<0)
			{
				sum+=M/num[i].div;
				break;
			}
			sum+=num[i].j;
			M=M-num[i].f;
		}
		printf("%.3lf\n",sum);
		
		
	}
}