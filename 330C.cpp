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
	lli d;
	in>>d;
	lli mine=d;
	for(int i=0;i<=9999;i++)
	{
		for(int j=0;j<=9999;j++)
		{
			if((abs(pow(i,2)+pow(j,2)-d))<mine)
			{
				mine=(abs(pow(i,2)+pow(j,2)-d));
			}
		}
	}
	ou<<mine<<nl;
}



