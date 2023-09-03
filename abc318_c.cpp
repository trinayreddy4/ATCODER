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
//	int useful=0;
//	for(int i=0;i<n;i++)
//	{
//		
//		useful++;
//	}
//	cout<<without<<endl;
//	cout<<useful;
	int i=1,da;
	long long dc=0;
	long long passcost=INT_MAX;
	while(da<=n)
	{
		dc=i*p;
		da=d*i;
		long long temp=0;
		temp+=dc;
		for(int i=0;i<n;i++)
		{
			if(f[i]>onepass &&da>0)
			{
				da--;
			}
			else
			{
				temp+=f[i];
			}
//			cout<<temp<<" ";
		}
//		cout<<endl;
		passcost=min(passcost,temp);
		i++;
	}
	while(dc<without)
	{
		dc=i*p;
		da=d*i;
		long long temp=0;
		temp+=dc;
		for(int i=0;i<n;i++)
		{
			if(f[i]>onepass &&da>0)
			{
				da--;
			}
			else
			{
				temp+=f[i];
			}
//			cout<<temp<<" ";
		}
//		cout<<endl;
		passcost=min(passcost,temp);
		i++;
	}
	cout<<min(passcost,without)<<endl;
}
