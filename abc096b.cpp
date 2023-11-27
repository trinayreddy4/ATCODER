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
	vi a(3);
	int k;
	
	for(auto &i:a)
	{
		in>>i;
	}
	in>>k;
	int maxe=-1,maxi=-1;
	for(int i=0;i<3;i++)
	{
		if(a[i]>maxe)
		{
			maxe=a[i];
			maxi=i;
		}
	}
	
	int sum=2*k*maxe;
	
	for(int i=0;i<3;i++)
	{
		if(i!=maxi)
		{
			sum+=a[i];
		}
	}
	
	ou<<sum<<nl;
}


