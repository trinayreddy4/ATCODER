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
	map<int,int>m;
	for(auto &&i:a)
	{
		in>>i;
		m[i]++;
	}
	int c=0;
	for(auto i:m)
	{
		if(i.first<i.second)
		{
			c+=i.second-i.first;
		}
		else if(i.first>i.second)
		{
			c+=i.second;
		}
	}
	ou<<c<<nl;
	
}


