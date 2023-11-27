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
		int x,a,b;
		in>>x>>a>>b;
		
		int ad=abs(a-x);
		int bd=abs(b-x);
		
		if(ad>bd)
		{
			ou<<"B"<<nl;
		}
		else
		{
			ou<<"A"<<nl;
		}
}


