#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k;
	cin>>k;
	vector<bool>l(10,true);
	
	for(int i=0;i<k;i++)
	{
		int t;
		cin>>t;
		l[t]=false;
	}
	int temp=stoi(s);
//	cout<<temp<<endl;
	int ans=0;
	int o=0;
	while(temp>0)
	{
		int t=s[o]-'0';
		for(int i=t;i<10;i++)
		{
			if(l[i])
			{
			ans=ans*10+i;
			break;
			}
		}
		o++;
		temp/=10;
	}
	cout<<ans<<endl;
}
