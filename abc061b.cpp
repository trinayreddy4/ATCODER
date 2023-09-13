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
	vi tempcount(n+1,0);
	
	for(int i=0;i<m;i++)
	{
		int t,l;
		in>>t>>l;
		
		tempcount[t]++;
		tempcount[l]++;
	}
	
	for(int i=1;i<=n;i++)
	{
		ou<<tempcount[i]<<nl;
	}
	
}


