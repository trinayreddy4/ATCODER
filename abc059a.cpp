#include<bits/stdc++.h>
#include<cstring>
#define nl endl
#define ou cout
#define in cin
using ll=long long;
using lli=long long int;
using namespace std;
typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
int main()
{
	string s1,s2,s3,ans="";
	in>>s1>>s2>>s3;
	
	char temp,temp2,temp3;
	temp=s1[0];
	temp2=s2[0];
	temp3=s3[0];
	ans+=temp;
	ans+=temp2;
	ans+=temp3;
	
	for(int i=0;i<ans.length();i++){
		ou<<(char)toupper(ans[i]);	
	}

}
