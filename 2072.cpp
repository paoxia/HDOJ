#include<set>  
#include<string>  
#include<iostream>  
using namespace std;  
int main()  
{  
    char c='0';  
    string s;  
    set<string> word;  
      while((c=getchar())!='#')  
     {  
        s="";  
        while(c!=' '&&c!='\n'&&c!='#')  
        {  
            s+=c;  
            c=getchar();  
        }  
        if(c=='#') return 0;  
        if(s.length()) word.insert(s);  
        if(c=='\n')   
        {  
            cout<<word.size()<<"\n";  
            word.clear();  
        }  
    }  
    return 0;  
}  