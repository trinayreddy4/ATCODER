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
	
	vi l(n);
	
	for(auto &&i:l)
	in>>i;
	
	sort(l.begin(),l.end());
	int sum=0;
	int j=n-1;
	for(int i=k;i>0;i--)
	{
		sum+=l[j];
		j--;	
	}
	ou<<sum<<nl;
}


