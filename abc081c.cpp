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
	int n,k;
	in>>n>>k;
	
	vi a(n);
	for(auto &&i:a)
	in>>i;
	
	unordered_set<int> t(a.begin(),a.end());
	
	int diff_ele=t.size();
	
	if(diff_ele<=k)
	{
		ou<<0<<nl;
		return 0;
	}
	else
	{
//		t.clear();
		map<int,int>m;
		
		for(auto i:a)
		{
			m[i]++;
		}
		
		int maxc=-1,maxe=-1,mine=INT_MAX,minc=INT_MAX;
		for(auto i:m)
		{
			if(i.second>maxc)
			{
				maxc=i.second;
				maxe=i.first;
			}
			if(i.second<minc)
			{
				minc=i.second;
				mine=i.first;
			}
		}
		int ans=0;
		while(t.size()>k)
		{
			m[mine]=0;
			m[maxe]+=minc;
			ans+=minc;
			t.erase(mine);
			maxc=-1,maxe=-1,mine=INT_MAX,minc=INT_MAX;
		for(auto i:m)
		{
			if(i.second>maxc)
			{
				maxc=i.second;
				maxe=i.first;
			}
			if(i.second<minc)
			{
				minc=i.second;
				mine=i.first;
			}
		}
		}
		ou<<ans<<nl;
	}
}


