#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep1(i,n) for(int i=1; i<=(n); i++)
#define sz(x) int(x.size())
#define all(x) (x).begin(),(x).end()
#define Q2 1000000007
#define Q 998244353
#define lINF LONG_LONG_MAX  //ll
#define iINF INT_MAX //int
#define yes "Yes"
#define no "No"
#define kotae cout<<ans<<endl;
#define dame { puts("0"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
using ll=long long;
using ull=unsigned long long;
using P=pair<int,int>;
using pqg=priority_queue<int,vector<int>,greater<int>>;
using vi=vector<int>;
using vi2=vector<vector<int>>;
using vi3=vector<vector<vector<int>>>;
using vl=vector<ll>;
using vl2=vector<vector<ll>>;
using vl3=vector<vector<vector<ll>>>;
using vs=vector<string>;
using vp=vector<P>;
using vp2=vector<vector<P>>;
void chmax(int &x, int y){ x=max(x,y); return; }
void chmin(int &x, int y){ x=min(x,y); return; }
void chmaxl(ll &x, ll y){ x=max(x,y); return; }
void chminl(ll &x, ll y){ x=min(x,y); return; }

int main() {  

  int n;
  cin >> n;
  vi a(n);
  rep(i,n) cin >> a[i];
  int i=n-1;
  vi ans;
  while(1){
    ans.push_back(a[i]);
    i-=2;
    if(i==-1) {
      i=0;
      break;
    }
    if(i==-2) {
      i=1;
      break;
    }
  }
  while(i<n){
    ans.push_back(a[i]);
    i+=2;
  }
  rep(i,n-1) cout<<ans[i]<<" ";
  cout<<ans[n-1]<<endl;

  return 0;
}
