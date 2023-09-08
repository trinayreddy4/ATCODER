#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	
	long long int sum=0;
	int ans=0;
	for(int i=1;i<=x;i++)
	{
		sum+=i;
		
		if(sum>=x)
		{
			ans=i;
			break;
		}
	}
	
	cout<<ans<<endl;
}


