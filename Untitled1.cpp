#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,p,q;
	cin>>n>>p>>q;
	long d[n];
	long min=LONG_MAX;
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
		if(min>d[i])
		min=d[i];
	}
	long discounted=q;
	long bill=discounted+min;
	if(bill<p)
	cout<<bill<<endl;
	else
	cout<<p<<endl;
	
}