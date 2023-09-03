#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string>s;
	for(int i=0;i<n;i++)
	{
		string aux;
		cin>>aux;
		s.push_back(aux);
	}
	int c=0;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			string a=s[j];
			string b=s[i];
			reverse(a.begin(),a.end());
			reverse(b.begin(),b.end());
			if(s[i]==s[j]|| s[i]==a||s[j]==b)
			{
				c++;
				break;
			}
		}
	}
	cout<<c<<endl;
	
}