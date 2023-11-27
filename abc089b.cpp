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
	unordered_set<char> s;
	
	int n;
	in>>n;
	
	for(int i=0;i<n;i++)
	{
		char ch;
		in>>ch;
		s.insert(ch);
	}
	
	if(s.size()==3)
	{
		ou<<"Three"<<nl;
	}
	else if(s.size()==4)
	{
		ou<<"Four"<<nl;
	}
}


