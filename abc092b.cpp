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
	int d,x;
	in>>d>>x;
	
	vi a(n);
	
	for(auto &&i:a)
	{
		in>>i;
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		int t=a[i];
//		ou<<t<<nl;
		for(int j=1;j<=d;j+=t)
		{
//			ou<<j<<nl;
			sum++;
		}
	}
	ou<<sum+x<<nl;
	
}


