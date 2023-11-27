#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	string s,t;
	in>>s>>t;
	
	map<char,int>mp;
	
	for(int i=0;i<s.length();i++)
	{
		mp[s[i]]++;
	}
	
	for(int i=0;i<t.length();i++)
	{
		mp[t[i]]--;
	}
	
	
	for(auto i:mp)
	{
		if(i.second>0)
		{
			ou<<"No"<<nl;
			return 0;
		}
	}
	
	ou<<"Yes"<<nl;
	return 1;
}


