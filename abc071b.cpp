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
	string s;
	in>>s;
	
	vector<bool>t(26,true);
	
	for(int i=0;i<s.length();i++)
	{
		t[s[i]-'a']=false;
	}
	
	for(int i=0;i<26;i++)
	{
		if(t[i])
		{
			ou<<(char)('a'+i)<<nl;
			return 0;
		}
	}
	ou<<"None"<<nl;
}


