#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	
	vector<string>a(n);
	vector<string>b(m);
	
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		a.push_back(s);
	}
	
	for(int i=0;i<m;i++)
	{
		string s;
		cin>>s;
		b.push_back(s);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i]==b[j])
			{
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"No"<<endl;
}

