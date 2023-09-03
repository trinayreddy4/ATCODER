#include<bits/stdc++.h>
using namespace std;
int main()
{
	string w;
	cin>>w;
	
	vector<int>a(26,0);
	for(int i=0;i<w.length();i++)
	{
		a[w[i]-'a']++;
	}
	
	for(int i=0;i<26;i++)
	{
		if(a[i]&1)
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	cout<<"Yes"<<endl;
}
