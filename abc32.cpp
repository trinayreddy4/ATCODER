#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,d,p;
	cin>>n>>d>>p;
	long f[n];
	long max=-1;
	long long without=0;
	for(long i=0;i<n;i++)
	{
		cin>>f[i];
		without+=f[i];
	}
	long long onepass=p/d;
	int useful=0;
	for(int i=0;i<n;i++)
	{
		if(f[i]>onepass)	
		useful++;
	}
//	cout<<useful<<endl;
	int purchase=INT_MAX;
	long long purchasecost=INT_MAX;
	if(useful%d!=0)
	{
		purchase=((useful)/d)+1;
		purchasecost=purchase*p;
	}
	else
	{
		purchase=((useful)/d)+1;
		purchasecost=purchase*p;
	}
//	cout<<purchase<<endl;
	long long bypass=0;
	bypass+=purchasecost;
	for(int i=0;i<n;i++)
	{
			if(f[i]>onepass &&purchase)
			{
				purchase--;
			}
			else
			{
				bypass+=f[i];
			}
	}
	if(bypass>without)
	{
		bypass=0;
		purchase=(useful)/d ;
		purchasecost=purchase*p;
		cout<<purchase<<endl;
		bypass+=purchasecost;
		for(int i=0;i<n;i++)
		{
			if(f[i]>onepass &&purchase)
			{
				purchase--;
			}
			else
			{
				bypass+=f[i];
			}
		}
	}
	cout<<bypass<<endl;
	cout<<min(bypass,without)<<endl;	
	
}
