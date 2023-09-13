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
	
	vi s(n);
	int sum=0;
	for(auto &&i:s)
	{
		in>>i;
		sum+=i;
	}
	
	if(sum%10!=0)
	{
		ou<<sum<<nl;
		return 0;
	}
	else
	{
		vi temp;
		int indicator=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]%10!=0)
			{
				temp.push_back(s[i]);
			}
			else
			{
				indicator++;
			}
		}
		if(indicator==n)
		{
			cout<<0<<nl;
		}
		else
		{
			ou<<sum-temp[0]<<nl;
		}
	}
	
}


