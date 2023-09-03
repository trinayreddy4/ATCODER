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
	long long int res=0,first=0,last=n-1;
	
	while(first<last)
	{
			long long int s=max(d[first],d[last]);
			long long int t=min(d[first],d[last]);
			long long int temp=0;
			if(f[first]!=f[last])
			{
				temp=s+t;
				res=max(res,temp);	
			}
			else if(f[first]==f[last])
			{
				temp=s+(t/2);
				res=max(res,temp);
			}
			if(d[first]<d[last])
			{
				first++;
			}
			else
			{
				last--;
			}
	}
	cout<<res<<endl;
}
