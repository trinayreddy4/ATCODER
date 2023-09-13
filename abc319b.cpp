#include<bits/stdc++.h>
#define nl endl
#define ou cout
#define in cin
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
	int n;
	cin>>n;
	
	string res="";
	
	for(int i=0;i<n+1;i++)
	{
		vector<int>divisors;
		for(int j=1;j<10;j++)
		{
			if(n%j==0)
			divisors.push_back(j);
		}
		int min=-1;
		for(int j=0;j<divisors.size();j++)
		{
			if((i%(n/divisors[j]))==0)
			{
			min=divisors[j];
			break;
			}
		}
		if(min!=-1)
		{
			res+=to_string(min);
		}
		else
		res+="-";
		
	}
	cout<<res<<endl;
}


