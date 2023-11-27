#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	int n;
	in>>n;
	
	vector<pair<int,int>>v;
	
	for(int i=0;i<n;i++)
	{
		int w,x;
		in>>w>>x;
		
		v.push_back({w,x});
	}
	
	vi a;
	int ans=-1;
	for(int i=9;i<=17;i++)
	{
		int temp=0;
		for(int j=0;j<n;j++)
		if((v[j].second+i)%24<=17 && (v[j].second+i)%24>=9)
		{
			temp+=v[j].first;
		}

		ans=max(ans,temp);
	}
	ou<<ans<<nl;
}



