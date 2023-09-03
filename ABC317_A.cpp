#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,h,x;
	cin>>n>>h>>x;
	int p[n];
	for(int i=0;i<n;i++)
	cin>>p[i];
	
	stack<int>temp;
	
	for(int i=n-1;i>=0;i--)
	{
		if(p[i]>=abs(x-h))
		{
			temp.push(i+1);
		}
	}
	cout<<temp.top()<<endl;
}
