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
	int n;
	in>>n;
	
	vi a(n);
	int c4=0,c2=0,c=0;
	for(auto &&i:a)
	{
		in>>i;
		
		if(i%4==0)
		c4++;
		else if(i%2==0)
		c2++;
	}
	
	c=n-c4-c2;
	if(c2>0)
	{
		c++;
	}
	
	if(c4+1>=c)
	{
		ou<<"Yes"<<nl;
	}
	else
	{
		ou<<"No"<<nl;
	}
}


