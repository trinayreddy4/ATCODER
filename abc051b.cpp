#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,s;
	cin>>k>>s;
	int ans=0;
	for(int i=0;i<=k;i++)
	{
		for(int j=0;j<=k;j++)
		{
			//x+y+z=s
			if(s-i-j>=0&&s-i-j<=k)
			ans++;
		}
	}
	cout<<ans<<endl;
}
