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
	string s;
	int k;
	in>>s>>k;
	int n=s.length();
	for(int i=0;i<min(n,k);i++)
	{
		if(s[i]>='2')
		{
			ou<<s[i]<<nl;
			return 0;
		}
	}
	
	ou<<1<<nl;
}


