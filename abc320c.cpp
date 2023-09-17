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
	int m;
	in>>m;
	
	string s1,s2,s3;
	in>>s1>>s2>>s3;
	int ans=INT_MAX;
	for(int i=0;i<m;i++)
	{
		char t=s1[i];
		int t2,t3;
		for(int j=0;j<m;j++)
		{
			if(t==s2[j])
			{
				t2=j;
				break;
			}
		}
		for(int j=0;j<m;j++)
		{
			if(t==s3[j])
			{
				t3=j;
				break;
			}
		}
		int twe=max(i,max(t2,t3));
		cout<<i<<" "<<t2<<" "<<t3<<" "<<ans<<" "<<twe<<nl;
		ans=min(ans,twe);
	}
	ou<<ans<<nl;
}


