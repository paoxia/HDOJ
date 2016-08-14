#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,n,p;
    string a;
    double fen,s,score,sum;
    cin>>t;
    while(t--)
    {
          p=0;
          score=0;
          sum=0;
          cin>>n;
        while(n--)
        {
              cin>>a>>fen>>s;
           if(s<60)
              p=1;
             score+=fen*s;
             sum+=fen;
        }
        if(p)
              cout<<"Sorry!"<<endl;
        else
        {
              score/=sum;
              cout.precision(2);
              cout<<fixed<<score<<endl;
        }
        if(t!=0)
              cout<<endl;
    }
    return 0;
}
