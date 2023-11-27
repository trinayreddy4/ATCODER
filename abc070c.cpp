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
ll gcd(ll a, ll b)
{
	if(b==0)
	return a;
	
	return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
	ll g=gcd(a,b);
	
	return a/g*b;
	
}
int main()
{
    fastread();
	long long n;
	in>>n;
	
	vector<long long> a(n);
	
	for(auto &&i:a)
	in>>i;
	
	ll lc=1LL;
	for(long i=0;i<n;i++)
	{
		lc=lcm(lc,a[i]);
	}
	ou<<lc<<nl;
	
	
	
}


