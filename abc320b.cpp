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
	
	int n=s.length();
	int siz=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			string temp=s.substr(i,j+1);
			string temp2=temp;
			reverse(temp.begin(),temp.end());
			if(temp==temp2)
			{
//				ou<<temp.length()<<nl;
//				ou<<temp<<nl;
				siz=max(siz,(int)temp.length());
			}
		}
	}
	ou<<siz<<nl;
}


