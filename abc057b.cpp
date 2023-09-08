#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	pair<int,int>s[n];
	pair<int,int>c[m];
	
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		s[i].first=a;
		s[i].second=b;
	}
	
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		c[i].first=a;
		c[i].second=b;
	}
	
	for(int i=0;i<n;i++)
	{
		int d=INT_MAX,in=INT_MAX;
		for(int j=0;j<m;j++)
		{
			int tem=abs(s[i].first-c[j].first)+abs(s[i].second-c[j].second);
//			cout<<tem<<endl;
			if(d>tem)
			{
					d=tem;
					in=j;
			}
			else if(d==tem)
			{
				if(in>j)
				{
					d=tem;
					in=j;
				}
			}
		}
		cout<<in+1<<endl;
	}
}


