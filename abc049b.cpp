#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin>>h>>w;
	string s[h];
	
	
	for(int i=0;i<h;i++)
	cin>>s[i];
	
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<s[i]<<endl;
		}
	}
}
