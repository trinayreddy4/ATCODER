#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x,y;
	cin>>n>>k>>x>>y;
	int amount=0;
	for(int i=1;i<=n;i++)
	{
		if(i<=k)
		{
			amount+=x;
		}
		else
		{
			amount+=y;
		}
	}
	cout<<amount<<endl;
}
