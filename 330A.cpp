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
	int n,l;
	in>>n>>l;
	
	vi a(n);
	int cnt=0;
	for(auto &i:a)
	{
		in>>i;
		if(i>=l)
		cnt++;
	}
	ou<<cnt<<nl;
}



