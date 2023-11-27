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
	int a,b,c,x;
	in>>a>>b>>c>>x;
	int cnt=0;
	for(int i=0;i<=c;i++)
	{
		for(int j=0;j<=b;j++)
		{
			for(int k=0;k<=a;k++)
			{
				if(i*50+j*100+k*500 == x)
				{
					cnt++;
				}
			}
		}
	}
	ou<<cnt<<nl;
}


