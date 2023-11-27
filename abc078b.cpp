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
	int x,y,z;
	in>>x>>y>>z;
	
	int t=y+z;
	int t1=x/t;
	if(t1*t +z<=x)
	{
		ou<<t1<<nl;
	}
	else
	{
		ou<<t1-1<<nl;
	}

//	int t1=y+z;
//	ou<<x/t1<<nl;
//	ou<<x%t1<<nl;
}


