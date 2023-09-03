#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<bool>ai(101,false);
	int count=0;
	int a,b,c;
	cin>>a>>b>>c;
	
	ai[a]=true;
	ai[b]=true;
	ai[c]=true;
	for(int i=1;i<101;i++)
	{
		if(ai[i])
		count++;
	}
	cout<<count<<endl;
}
