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
	
	vi t(m),w(m),s(m);
	vi gc(n,0);
	for(int i=0;i<m;i++)
	{
		in>>t[i]>>w[i]>>s[i];
	}
	vi ans(n,0);
	for(int i=0;i<m;i++)
	{
		int time=t[i];
		int avb=-1;
		for(int i=n-1;i>=0;i--)
		{
			if(gc[i]<=time)
			{
				avb=i;
				break;
			}
		}
		if(avb!=-1)
		{
			ans[avb]+=w[i];
			gc[avb]=t[i]+s[i];
		}
		
	}
	
	for(int i=n-1;i>=0;i--)
	{
		ou<<ans[i]<<nl;
	}
	
}


