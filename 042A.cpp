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
	vi a(3);
	int c5=0,c7=0;
	for(auto &i:a)
	{
		in>>i;
		
		if(i==5)
		{
			c5++;
		}
		else if(i==7)
		{
			c7++;
		}
	}
	
	if(c5==2&&c7==1)
	{
		yes	
	}	
	else
	{
		no
	}
}



