#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long int f[n],d[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>f[i]>>d[i];
	}
	long long int res=0;
	for(long long int i=0;i<n;i++)
	{
		for(long long int j=i+1;j<n;j++)
		{
			long long int s=max(d[i],d[j]);
			long long int t=min(d[i],d[j]);
			long long int temp=0;
			if(f[i]!=f[j])
			{
				temp=s+t;
				res=max(res,temp);	
			}
			else if(f[i]==f[j])
			{
				temp=s+(t/2);
				res=max(res,temp);
			}
		}
	}
	cout<<res<<endl;
	
}
