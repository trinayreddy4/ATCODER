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
	int n;
	in>>n;
	
	unordered_map<int,bool>temp;
	for(int i=0;i<n;i++)
	{
		int t;
		in>>t;
		
		if(temp.find(t)==temp.end())
		{
			temp[t]=true;
		}
		else
		{
			temp.erase(t);
		}
	}
	ou<<temp.size();
}


