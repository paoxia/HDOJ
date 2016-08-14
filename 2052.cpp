#include<iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    while (cin>>n>>m)
 {
        cout<<"+";
        for (i=0; i<n; i++)
            cout<<"-";
        cout<<"+"<<endl;
        for (j=0; j<m; j++)
  {
            cout<<"|";
            for (i=0; i<n; i++)
                cout<<" ";
            cout<<"|"<<endl;;
        }
        cout<<"+";
        for (i=0; i<n; i++)
            cout<<"-";
        cout<<"+"<<endl<<endl;;
    }
    return 0;
}