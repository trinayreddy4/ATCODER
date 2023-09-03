#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	stack<int>q;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		q.push(0);
		else if(s[i]=='1')
		q.push(1);
		else if(s[i]=='B')
		{
			if(!q.empty())
			q.pop();
		}
//		cout<<q.top()<<endl;
	}
	stack<int>t;
	while(!q.empty())
	{
		t.push(q.top());
		q.pop();
	}
	while(!t.empty())
	{
		cout<<t.top();
		t.pop();
	}
}
