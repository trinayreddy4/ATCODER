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
	vi rating(n);
	
	for(auto &&i:rating)
	{
		in>>i;
	}
	int count=0;

	 vector<int> color(8);
  int ab_3200=0;
  for(int i = 0; i < n; i++){
    if(rating[i] >= 3200) ab_3200++;
    else{
      int index = rating[i]/400;
      color[index]++;
    }
  }
  
  int cnt = 0;
  for(int i = 0; i < 8; i++){
    if(color[i] > 0) cnt++;
  }
  
  int min_colors = cnt, max_colors;
  if(min_colors == 0) min_colors = 1;
  max_colors = cnt+ab_3200;
  
  cout << min_colors << " " << max_colors;
  
	
}


