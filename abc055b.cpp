#include<bits/stdc++.h>
long mod=1000000007;
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long ans=1;
	for(int i=2;i<=n;i++)
	{
		ans=(ans*i)%mod;
	}
	cout<<ans%mod<<endl;
}

