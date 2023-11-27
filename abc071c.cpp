#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fore(i,a) for(auto &i:a)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define inf 2147483647
#define llinf 9223372036854775807
int dx4[4]={-1,0,1,0};
int dy4[4]={0,1,0,-1};
int dx8[8]={-1,-1,0,1,1,1,0,-1};
int dy8[8]={0,1,1,1,0,-1,-1,-1};

int main(){

  int n;
  cin>>n;
  vector<int>a(n);
  fore(x,a) cin>>x;

  sort(rall(a));
  int i=0;
  ll edge1,edge2;
  bool search1=1,search2=1;
  while(i<n-1){
    if(search1){
      if(a[i]==a[i+1]){
        edge1=a[i];
        i+=2;
        search1=0;
      }
      else i++;
    }
    else if(search2){
      if(a[i]==a[i+1]){
        edge2=a[i];
        search2=0;
        break;
      }
      else i++;
    }
  }

  if(!search1 && !search2) cout<<edge1*edge2<<endl;
  else cout<<0<<endl;

}
