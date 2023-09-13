#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define yes ou<<"YES"<<nl;
#define no ou<<"NO"<<nl;
#define rep(i,n) for (int i=0;i<(int) (n);i++)
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
    fastread();
	int h,w;
	in>>h>>w;
	w+=2;
	rep(i,w)
	{
		cout<<"#";
	}
	cout<<endl;
	rep(i,h)
	{
		string s;
		cin>>s;
		cout<<"#"<<s<<"#"<<endl;
	}
	rep(i,w)
	{
		cout<<"#";
	}
}


