#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
	string a,b;
	in>>a>>b;
	
	if(a.length()>b.length())
	{
		ou<<"GREATER"<<nl;
	}
	else if(a.length()<b.length())
	{
		ou<<"LESS"<<nl;
	}
	else if(a.length()==b.length())
	{
		for(int i=0;i<a.length();i++)
		{
			if(a[i]>b[i])
			{
				ou<<"GREATER"<<nl;
				return 0;
			}
			else if(a[i]<b[i])
			{
				ou<<"LESS"<<nl;
				return 0;
			}
		}
		ou<<"EQUAL"<<nl;
	}
}


