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
	int mine=INT_MAX,maxe=INT_MIN;
	for(auto &i:a)
	{
		in>>i;
		mine=min(mine,i);
		maxe=max(maxe,i);
	}
	ou<<abs(maxe-mine)<<nl;
	
}


