#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = (l); i < (r); i++)
#define repd(i, l, r) for (int i = (l); i >= (r); i--)
 
typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9;

using namespace std;
using P = pair<int, int>;

int	main(void)
{	
	int W,H,N;
	cin >> W >> H >> N;
	int a_1_max = 0;
	int a_2_min = W;
	int a_3_max = 0;
	int a_4_min = H;

	rep(i,0,N)
	{
		int x, y, a;
		cin >> x >> y >> a;
		if(a==1)
			a_1_max = max(a_1_max, x);
		if(a==2)
			a_2_min = min(a_2_min, x);
		if(a==3)
			a_3_max = max(a_3_max, y);
		if(a==4)
			a_4_min = min(a_4_min, y);
	}
	if(a_2_min - a_1_max <= 0 ||a_4_min - a_3_max <= 0)
	{
		cout << 0 <<endl;
		return(0);
	}
	else
		cout << (a_2_min - a_1_max)*(a_4_min - a_3_max) <<endl;
	return(0);
}
