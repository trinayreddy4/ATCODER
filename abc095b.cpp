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
	int n,x;
	in>>n>>x;
	
	vi m(n);
	int sum=0;
	int mine=INT_MAX;
	for(auto &i:m)
	{
		in>>i;
		sum+=i;
		mine=min(i,mine);
	}
	
	int temp=x-sum;
	temp/=mine;
	
	ou<<n+temp<<nl;
	
}


