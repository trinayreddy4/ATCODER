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
	int a,b,c,d;
	in>>a>>b>>c>>d;
	
	if(abs(a-c)<=d||((abs(a-b)<=d)&&((abs(b-c))<=d)))
	{
		ou<<"Yes"<<nl;
	}
	else
	{
		ou<<"No"<<nl;
	}
}


