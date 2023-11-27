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
	{
		in>>i;
		if(i&1)
		{
			ou<<0<<nl;
			return 0;
		}
	}
	int c=0;
	while(true)
	{	
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				a[i]/=2;
			}
			else
			{
				ou<<c<<nl;
				return 0;
			}
		}
		c++;
	}
}


