#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main()
{
	stack<char> temp;
	string input,output;
	vector<string> result;
	int n,i,j;
	while(cin>>n>>input>>output)
	{
		i=j=0;
		temp.push(input[i]);
		result.push_back("in");
		while(i<input.size())
		{
			while(!temp.empty()&&temp.top()==output[j])
			{
				result.push_back("out");
				j++;
				temp.pop();
			}
			if(++i<input.size())
			{
				temp.push(input[i]);
				result.push_back("in");
			}
		}
		if(temp.empty())
		{
			cout<<"Yes."<<endl;
			for(i=0;i<result.size();i++)
                cout<<result[i]<<endl;
		}
		else
		{
			cout<<"No."<<endl;
			while(!temp.empty())
                temp.pop();
		}
		cout<<"FINISH"<<endl;
        result.clear();
	}
}