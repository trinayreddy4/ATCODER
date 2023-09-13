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
const int AMAX = 100000;
ll cnt[AMAX + 1];

int main()
{
    fastread();
	int N;
 	ll K;
 	cin >> N >> K;

 	for (int i = 0; i < N; ++i) {
 		int A, B;
 		cin >> A >> B;
 		cnt[A] += B;
 	}

 		for (int ans = 1; ans <= AMAX; ++ans){
		 if (K <= cnt[ans]) {
 			cout << ans << endl;
 			break;
 		}
 			K -= cnt[ans];
 }
}


