#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	string s;
	in>>s;
	
	int a=s[0]-'0';
	int b=s[1]-'0';
	int c=s[2]-'0';
	int d=s[3]-'0';
	
	if(a-b-c+d==7)
	{
		ou<<a<<"-"<<b<<"-"<<c<<"+"<<d<<"="<<7;
	}
	else if(a-b+c+d==7)
	{
		ou<<a<<"-"<<b<<"+"<<c<<"+"<<d<<"="<<7;
	}
	else if(a+b+c+d==7)
	{
		ou<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<7;
	}
	else if(a+b-c-d==7)
	{
		ou<<a<<"+"<<b<<"-"<<c<<"-"<<d<<"="<<7;
	}
	else if(a+b+c-d==7)
	{
		ou<<a<<"+"<<b<<"+"<<c<<"-"<<d<<"="<<7;
	}
	else if(a-b-c-d==7)
	{
		ou<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"="<<7;
	}
	else if(a-b+c+d==7)
	{
		ou<<a<<"-"<<b<<"+"<<c<<"+"<<d<<"="<<7;
	}
	else if(a-b+c-d==7)
	{
		ou<<a<<"-"<<b<<"+"<<c<<"-"<<d<<"="<<7;
	}
	
}


