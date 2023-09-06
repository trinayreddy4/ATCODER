#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>as(n+1,0);
	ll ans=1;
for(ll i=2;i<=n;i++){
 int y=i;
   for(int j=2;j*j<=y;j++)
     if(y%j==0)
       while(y%j==0)
         as[j]++,y/=j;
   as[y]++;
}
  for(int i=2;i<=n;i++)
    ans=ans*(as[i]+1)%100000007;
    
cout<<ans<<endl;
}

