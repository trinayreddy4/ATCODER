#include<bits/stdc++.h>
#include<stdlib.h>
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
	vi s(n),c(n);
	map<int,int>m;
	for(int i=0;i<n;i++)
	{
		in>>s[i]>>c[i];
		m[s[i]]=c[i];
	}
	int te=10;
	while(te-->0)
	{
		bool flag=true;
//		ou<<"looping "<<te<<nl;
//		te++;
		for(auto i:m)
		{
			if(i.second>=2)
			flag=false;
		}
		
		if(flag)
		break;
		
		for(auto i:m)
		{
			if(i.second>=2)
			{
				m[(i.first*2)]*=2;
				m[i.first]/=2;
			}
		}
		
		for(auto i=m.begin();i!=m.end();)
		{
			if(i->second==0)
			{
				i=m.erase(i);
			}
			else
			i++;
		}	
		for(auto i:m)
		ou<<i.second<<" ";
		
		ou<<nl;
	}
	ou<<m.size()<<nl;
}


