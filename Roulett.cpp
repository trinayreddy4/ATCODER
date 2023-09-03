#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	vector<vector<int>>store;
	for(auto i=0;i<n;i++)
	{
		cin>>a[i];
		vector<int>temp;
		for(auto j=0;j<a[i];j++)
		{
			int t;
			cin>>t;
			temp.push_back(t);
		}
		store.push_back(temp);
	}
	int x;
	cin>>x;
	vector<int>te;
	for(auto i=0;i<n;i++)
	{
		for(auto j=0;j<store[i].size();j++)
		{
			if(store[i][j]==x)
			{
				te.push_back(i);
			}
		}
	}
	if(te.size()!=0)
	{
	int cmp=store[te[0]].size();
	for(auto i=0;i<te.size();i++)
	{
			cmp=min(cmp,(int)store[te[i]].size());
	}
	vector<int>ia;
	for(auto i=0;i<te.size();i++)
	{
		if(store[te[i]].size()==cmp)
		{
			ia.push_back(te[i]);
		}
	}
	cout<<ia.size()<<endl;
	for(auto i=0;i<ia.size();i++)
	{
		cout<<ia[i]+1<<" ";
	}
}
else
{
	cout<<0<<endl;
}
	
}
