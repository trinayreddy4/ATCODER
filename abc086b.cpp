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
    string a,b;
    in>>a>>b;
    string c=a+b;
    
    int d=stoi(c);
    
    for(int i=1;i<=1000;i++)
    {
    	if(i*i==d)
    	{
    		ou<<"Yes"<<nl;
    		return 0;
		}
	}
	
	ou<<"No"<<nl;
	return 0;
}


