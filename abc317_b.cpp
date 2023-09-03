#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int minn=INT_MAX,maxx=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n-1;i++)
	{
			if(abs(a[i]-a[i+1])==2)
			{
				cout<<a[i]+1<<endl;
				return 0;
			}
	}
	
}
