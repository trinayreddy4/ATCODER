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
	int x,y;
	
	in>>x>>y;
	vector<int>temp={0,0,2,0,1,0,1,0,0,1,0,1,0};
//	auto it=find(temp.begin(),temp.end(),x);
//	auto i=find(temp.begin(),temp.end(),y);
//	
	int xi=temp[x];
	int yi=temp[y];
//	cout<<xi<<" "<<yi<<endl;
	if(xi==yi)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}


