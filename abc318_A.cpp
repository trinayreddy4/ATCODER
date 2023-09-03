#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,p;
	cin>>n>>m>>p;
	int d=0;
	for(int i=1;i<=n;i++)
	{
		if(i==m)
		{
		d++;
		m=m+p;
		}
	}
	cout<<d<<endl;
}
