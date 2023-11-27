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
	
	vi t(n),x(n),y(n);
	
	for(int i=0;i<n;i++)
	{
		in>>t[i]>>x[i]>>y[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		int te=t[i+1]-t[i];
		int d=abs(x[i]-x[i+1])+abs(y[i]-y[i+1]);
		if(d<=te &&(d%2)==(te%2))
		{
				ou<<"Yes"<<nl;
				return 0;
		}
		else
		{
				ou<<"No"<<nl;			
					return 0;
		}
	}
	
	ou<<"No"<<nl;	
	
}


