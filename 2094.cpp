include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    int n;
    string a,b;
    while(cin>>n&&n)
    {
        set<string> lost,total;
        while(n--)
        {
            cin>>a>>b;
            total.insert(a);
            total.insert(b);
            lost.insert(b);
        }
        if(total.size()==lost.size()+1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}