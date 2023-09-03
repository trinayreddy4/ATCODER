#include<bits/stdc++.h>
using namespace std;
bool check(vector<bool>like,int n)
{
	string s=to_string(n);
	
	for(int i=0;i<s.size();i++)
	{
		if(like[s[i]-'0'])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<bool>d(10,false);
	
	for(int i=0;i<k;i++)
	{
		int t;
		cin>>t;
		d[t]=true;
	}
	
	for(int i=n;i<10001;++i)
	{
		if(check(d,i))
		{
			cout<<i<<endl;
			return 0;
		}
	}
}
