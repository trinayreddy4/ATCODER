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
	string n;
	in>>n;
	int c=1;
	for(int i=1;i<n.length();i++)
	{
		if(n[i]==n[i-1])
		c++;
		else
		c=1;
		
		if(c>=3)
		{
			ou<<"Yes"<<nl;
			return 0;
		}
		
	}
	ou<<"No"<<nl;
	
}


