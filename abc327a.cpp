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
	
	string s;
	in>>s;
	
	for(int i=0;i<s.length()-1;i++)
	{
		if((s[i]=='a' && s[i+1]=='b' )||(s[i]=='b' &&s[i+1]=='a'))
		{
			ou<<"Yes"<<nl;
			return 0;
		}
	}
	
	ou<<"No"<<nl;
}



