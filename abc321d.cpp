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
	ll n,m,p;
	
	in>>n>>m>>p;
	
	vector<ll> a(n);
	vector<ll> b(m);
	
	for(auto &&i:a)
	in>>i;
	
	for(auto &&i:b)
	in>>i;
	ll sum=0;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if((a[i]+b[j])>=p)
			{
				sum=sum+((m-j)*p);
				break;
			}
			else
			sum+=(a[i]+b[j]);
		}
	}
	ou<<sum<<nl;
	
}


