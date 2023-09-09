#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
int main()
{
	string o,e;
	in>>o>>e;
	
	int l1=o.length();
	int l2=e.length();
	int od=0,ed=0;
	string ans="";
	for(int i=0;i<l1+l2;i++)
	{
		if(i+1&1)
		{
			ans+=o[od++];
		}
		else
		{
			ans+=e[ed++];
		}
	}
	ou<<ans<<nl;
}


