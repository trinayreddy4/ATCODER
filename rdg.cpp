#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n],c[n],d[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i]>>c[i]>>d[i];
	}
	int total=0;
	for(int i=0;i<=100;i++)
	{
		for(int j=0;j<=100;j++)
		{
			if((j>=a[j])&&(j<=b[j]) &&(j>=c[j])&&(j<=d[j]))
			total++;
		}
	}
	cout<<total<<endl;
	
}
