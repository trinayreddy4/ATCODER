#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t>>n;
	vector<string>s(101);
	
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sort(s.begin(),s.end());
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
	}
}
