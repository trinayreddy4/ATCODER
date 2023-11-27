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
	int n,m;
	in>>n>>m;
	
	string s,t;
	in>>s;
	in>>t;
	
	bool prefix=true,suffix=true;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]!=t[i])
		{
			prefix=false;
			break;
		}	
	}
	int j=0;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]!=t[m-1-j])
		{
			suffix=false;
			break;
		}
		j++;
	}
//	ou<<prefix<<" "<<suffix<<nl;
	if(prefix&&suffix)
	{
		ou<<0<<nl;
	}
	else if(prefix&& (!suffix))
	{
		ou<<1<<nl;
	}
	else if(suffix && !prefix)
	{
		ou<<2<<nl;
	}
	else if(!suffix&&!prefix)
	{
		ou<<3<<nl;
	}
}


