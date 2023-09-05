#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int t[n];
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
	int m;
	cin>>m;
	int p[m],x[m];
	
	for(int i=0;i<m;i++)
	{
		cin>>p[i]>>x[i];
	}
	
	for(int i=0;i<m;i++)
	{
		vector<int>temp(t,t+n);
		temp[p[i]-1]=x[i];
		int sum=0;
		for(int k=0;k<temp.size();k++)
		{
//			cout<<temp[k]<<" ";
			sum+=temp[k];
		}
		cout<<sum<<endl;
	}
	
	
}
