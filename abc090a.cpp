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
	vs s(3);
	
	for(auto &i:s)
	in>>i;
	
	string t;
	t+=s[0][0];
	t+=s[1][1];
	t+=s[2][2];
	ou<<t<<nl;
}


