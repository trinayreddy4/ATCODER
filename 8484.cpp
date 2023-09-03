#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int max=-1;
	int pos=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=max)
		{
		max=a[i];
		pos=i;
		}
	}
	
	int comp=a[0];
	
	if(max!=comp || pos!=0)
	{
		cout<<max-comp+1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
	
}
