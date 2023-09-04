#include<bits/stdc++.h>
using namespace std;
long long ans,len;
string s;
void dfs(int now,long long sum){
	if(now==len){
		ans+=sum;
		return;
	}
	for(int i=now;i<len;i++){
		long long tmp=0;
		for(int j=now;j<=i;j++)tmp=tmp*10+s[j]-'0';
		dfs(i+1,sum+tmp);
	}
}
int main(){
	cin>>s;
	len=s.size();
	dfs(0,0);
	cout<<ans;
	return 0;
} 
