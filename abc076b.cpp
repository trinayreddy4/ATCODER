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
	int n,x;
	in>>n>>x;
	int ans=1;
	
	for(int i=0;i<n;i++)
	{
		if(ans*2<=ans+x)
		{
			ans*=2;
		}
		else
		ans+=x;
	}
	ou<<ans<<nl;
}


