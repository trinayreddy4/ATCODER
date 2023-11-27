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
	int n;
	in>>n;
	
	vi a(n);
	for(auto &&i:a)
	in>>i;
	
	map<int,int>t;
	for(int i=0;i<n;i++)
	{
		t[a[i]-1]++;
		t[a[i]]++;
		t[a[i]+1]++;
	}
	int max=-1,maxe=-10;
	for(auto i:t)
	{
		if(max<i.second)
		{
			maxe=i.first;
			max=i.second;
		}
	}
	ou<<max<<nl;
}


