#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string ans="";
	
	for(int i=0;i<19;i++)
	{
		if(s[i]!=',')
		ans+=s[i];
		else if(s[i]==',')
		ans+=' ';
	}
	cout<<ans<<endl;
}
