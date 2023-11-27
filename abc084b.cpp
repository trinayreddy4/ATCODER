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
	int a,b;
	in>>a>>b;
	
	string s;
	in>>s;
	if(s[a]!='-')
	{
		ou<<"No"<<nl;
		return 0;
	}
	for(int i=0;i<a;i++)
	{
		int t=s[i]-'0';
		
		if(!(t>=0&&t<=9))
		{
			ou<<"No"<<nl;
			return 0;
		}
	}
	int i=0;
	for(i=a+1;i<a+b+1;i++)
	{
		int t=s[i]-'0';
		
		if(!(t>=0&&t<=9))
		{
			ou<<"No"<<nl;
			return 0;
		}
	}
	if(i!=s.length())
	{
		ou<<"No"<<nl;
		return 0;
	}
	ou<<"Yes"<<nl;
}


