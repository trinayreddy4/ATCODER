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
	
	int a[n];
	int mine=INT_MAX,maxe=INT_MIN;
	ll sum=0;
	for(int i=0;i<n-1;i++)
	{
		in>>a[i];
		sum+=a[i];
	}
	
	for(int i=0;i<101;i++)
	{
		vi t(a,a+n-1);
		t.push_back(i);
		sort(t.begin(),t.end());
//		for(auto i:t)
//		{
//			ou<<i<<" "<<nl;
//		}
//		ou<<nl;
		int min=t[0];
		int max=t[n-1];
		int tem=sum;
		tem+=i;
		tem=tem-min-max;
//		ou<<tem<<" "<<x<<nl;
		if(tem>=x)
		{
			ou<<i<<nl;
			return 0;
		}
		
	}
	ou<<-1<<nl;
}


