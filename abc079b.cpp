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
	vector<ll> a(87);
	a[0]=2;
	a[1]=1;
	for(int i=2;i<=86;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	int n;
	in>>n;
	
	ou<<a[n]<<nl;
}


