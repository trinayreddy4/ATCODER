#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define all(arr) arr.begin(),arr.end()
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
	
	
	for(int i=n;i<=999;i++)
	{
		int t=i;
		
		int ld=t%10;
		t/=10;
		int sld=t%10;
		t/=10;
		int tld=t%10;
		if(tld*sld==ld)
		{
			ou<<i<<nl;
			return 0;
		}
	}
}


