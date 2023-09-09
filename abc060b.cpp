#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
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
	int a,b,c;
	in>>a>>b>>c;
	
	for(int i=1;i<10000;i++)
	{
		if((a*i)%b==c)
		{
			yes
			return 0;
		}
	}
	no
}


