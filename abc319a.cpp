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
	unordered_map<string,int>temp;
	temp["tourist"]=3858;
	temp["ksun48"]=3679;
	temp["Benq"]=3658;
	temp["Um_nik"]=3648;
	temp["apiad"]=3638;
	temp["Stonefeang"]=3630;
	temp["ecnerwala"]=3613;
	temp["mnbvmar"]=3555;
 	temp["newbiedmy"]=3516;
 	temp["semiexp"]=3481;
 	string s;
 	cin>>s;
 	auto it=temp.find(s);
 	ou<<it->second<<nl;
}


