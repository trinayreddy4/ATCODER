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
	
	vi a(n);
	for(auto &&i:a)
	{
	in>>i;
	i--;
	}
	 int now = 0,c=0;
    while(1){
        if(now == 1){
            cout << c << endl;
            return 0;
        }
        if(n < c){
            cout << -1 << endl;
            return 0;
        }
        c++;
        now = a[now];
    }
    return 0;
	
	
}


