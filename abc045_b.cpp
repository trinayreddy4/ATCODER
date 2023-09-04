#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	cin>>a>>b>>c;
	int ia=0,ib=0,ic=0;
	char curr='a';
	while(true)
	{
		if(curr=='a')
		{
			if(ia==a.length())
			{
				cout<<"A"<<endl;
				return 0;	
			}
			curr=a[ia++];
		}
		else if(curr=='b')
		{
			
			if(ib==b.length())
			{
				cout<<"B"<<endl;
				return 0;
			}	
			curr=b[ib++];
		}
		else if(curr=='c')
		{	
			
			if(ic==c.length())
			{
				cout<<"C"<<endl;
				return 0;
			}
			curr=c[ic++];
		}
//		cout<<curr<<endl;
	}
}
