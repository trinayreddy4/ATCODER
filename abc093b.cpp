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
	int a,b,k;
	in>>a>>b>>k;
	int temp=a;
	set<int>s;
	
	for(int i=0;i<k&&temp<=b;i++,temp++)
	{
		s.insert(temp);
	}
	
	temp=b;
	for(int i=0;i<k&&temp>=a;i++,temp--)
	{
		s.insert(temp);
	}
	for(auto i=s.begin();i!=s.end();i++)
	{
		ou<<*i<<nl;
	}
	
	
	
}


