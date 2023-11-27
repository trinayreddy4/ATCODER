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
	int x,y;
	in>>x>>y;
	
	if((y>=x &&abs(y-x)<=2)||(x>=y &&abs(x-y)<=3))
	{
		ou<<"Yes"<<nl;
	}
	else
	{
		ou<<"No"<<nl;
	}
}



