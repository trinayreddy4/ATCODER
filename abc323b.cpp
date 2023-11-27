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
	
	string s[n];
	
	for(int i=0;i<n;i++)
	{
		in>>s[i];
	}
	
	int a[n+1];
	
	for(int i=0;i<n;i++)
	{
		int cnt=0;
		string t=s[i];
		for(int j=0;j<t.length();j++)
		{
			if(t[j]=='o')
			cnt++;
		}	
		a[i+1]=cnt;
	}
	
	for(int i=0;i<n;i++)
	{
		int temp=a[i];
		int maxe=-1;
		for(int j=0;j<=n;j++)
		{
			if(a[j]!=-1)
			{
			if(a[j]>temp)
			{
				maxe=j;
				temp=a[j];
			}
			else if(a[j]==temp)
			{
				if(j<=maxe)
				maxe=j;		
			}
			}
		}
		a[maxe]=-1;
		ou<<maxe<<" ";
	}
	
}
