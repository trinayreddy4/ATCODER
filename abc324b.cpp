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
	ll n;
	in>>n;
	
	for(int i=0;i<1001;i++)
	{
		for(int j=0;j<1001;j++)
		{
			if((pow(2,i)*pow(3,j))==n)
			{
				ou<<"Yes"<<nl;
				return 0;
			}
		}
	}
	ou<<"No"<<nl;
	return 0; 
}


