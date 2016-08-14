#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t,i,j,a[101],n;
	while(cin>>n&&n!=0)
	{
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(abs(a[j])<abs(a[j+1]))
                    {
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                    }

			}
		}
		for(i=0;i<n-1;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<a[n-1];
		cout<<endl;
	}
}