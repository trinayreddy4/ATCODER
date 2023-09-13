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
	
	vi alpha(26,0);
	
	for(int i=0;i<s.length();i++)
	{
		alpha[s[i]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(alpha[i]>1)
		{
			cout<<"no"<<nl;
			return 0;
		}
	}
	cout<<"yes"<<nl;
}


