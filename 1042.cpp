#include<iostream>
using namespace std;

int main()
{
	int num[100000];
	int N,carry,i,j;
	while(cin>>N)
	{
		if(N==0||N==1)	{cout<<"1"<<endl;continue;}
		num[0]=num[1]=1;
		for(i=2;i<=N;i++)
		{
			carry=0;
		 	for(j=1;j<=num[0];j++)
 			{
				num[j]*=i;
     			num[j]+=carry;
     			carry=num[j]/10;
     			num[j]=num[j]%10;
 			}
     		while(carry)
     		{
      			num[j]=carry%10;
      			num[0]=j;
      			carry=carry/10;
      			j++;
     		}
		}
		for(i=num[0];i>=1;i--)	cout<<num[i];
		cout<<endl;
	}
}