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
	
	if((a+b)%3==0||a%3==0||b%3==0)
	{
		ou<<"Possible"<<nl;
	}
	else
	{
		ou<<"Impossible"<<nl;
	}
}


