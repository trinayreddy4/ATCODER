#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool flag=false,iaflag=false,izflag=false;
	int cnt=0;
	int ia=-1;
	int n=s.length();
	int iz=-1;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A'&&!iaflag)
		{
			ia=max(ia,i);
			iaflag=true;
			
		}
		if(s[n-1-i]=='Z'&&!izflag)
		{
			iz=max(iz,n-1-i);
			izflag=true;
		}
	}
	cnt=iz-ia+1;
//	cout<<iz<<endl;
//	cout<<ia<<endl;
	cout<<cnt<<endl;
}

