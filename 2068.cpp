#include<stdio.h>
double C(int n,int m)
{
	int l;
	double s1=1,s2=1;
	for(l=1;l<=m;l++)
	{
		s1*=(n-l+1);
		s2*=l;
	}
	return s1/s2;
}
int main()
{
	int n,m,i;
	double a[30],sum;
	a[0]=0;
	a[1]=0;
	a[2]=1;
	for(i=3;i<30;i++)
	{
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	}
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		sum=0;
		if(n%2==0)
		m=n/2;
		else
		m=(n+1)/2;
	 	for(i=m;i<n;i++)
   			sum=sum+C(n,i)*a[n-i];
  		printf("%.lf\n",sum+1);
		
	}
}