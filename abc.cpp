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
//		without+=f[i];
	}
	long long onepass=p/d;
	int pass=0;
	int useful=0;
	long long sum=0;
	int days=0;
	for(int i=0;i<n;i++)
	{
		if(f[i]>onepass &&days==0)
		{
			pass++;
			days+=d-1;
		}
		else if(f[i]>onepass)
		{
			days--;
		}
	}
	
	cout<<pass<<endl;
}
