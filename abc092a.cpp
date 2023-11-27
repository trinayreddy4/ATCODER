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
	int a,b,c,d;
	in>>a>>b>>c>>d;
	int ans=0;
	if(a<=b)
	{
		ans+=a;
	}
	else
	{
		ans+=b;
	}
	
	if(c<=d)
	{
		ans+=c;
	}
	else
	{
		ans+=d;
	}
	ou<<ans<<nl;
}


