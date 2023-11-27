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
	in>>s;
	
	int sum=0;
	
	for(int i=0;i<s.length();i++)
	{
		sum=sum+s[i]-'0';
	}
	int t=stoi(s);
	
	if(t%sum==0)
	{
		ou<<"Yes"<<nl;
	}
	else
	{
		ou<<"No"<<nl;
	}
}


