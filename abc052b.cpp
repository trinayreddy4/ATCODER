#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0;
	int n;
	cin>>n;
	string s;
	cin>>s;
	int ans=-1;
	for(int i=0;i<n;i++)
	{
		ans=max(ans,x);
		if(s[i]=='I')
		x++;
		else
		x--;
		ans=max(ans,x);
	}
	cout<<ans<<endl;
}

