#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define fastio std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
#define in cin
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
//	fastio
	int n,t;
	in>>n>>t;
	
	vi a(n+1);
	
	for(auto &&i:a)
	cin>>i;
	
	a[n]=a[n-1]+t;
	lli ans=0;
	for(int i=0;i<n;i++)
	{
		lli result=a[i+1]-a[i];
		
		if(t>result)
		{
			ans+=result;			
		}
		else
		{
			ans+=t;
		}
	}
	ou<<ans<<nl;
}


