#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int first=0,second=0;
	
	first=a*b;
	second=c*d;
	cout<<max(first,second)<<endl;
}

