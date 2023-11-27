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
int sum(string s)
{
	int su=0;
	for(int i=0;i<s.length();i++)
	{
		su=su+(int)s[i]-'0';
	}
	return su;
}
int main()
{
    fastread();
	int n,a,b;
	in>>n>>a>>b;
	int ans=0;
//	ou<<sum("14")<<nl;
	for(int i=1;i<=n;i++)
	{
		string s=to_string(i);
		int twmp=sum(s);
//		ou<<twmp<<nl;
		if(twmp>=a&&twmp<=b)
		{
			ans+=i;
		}
	}
	ou<<ans<<nl;
}


