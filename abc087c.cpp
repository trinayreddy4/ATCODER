#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxCandies(vector<vector<int>>& grid) {
  int n = grid[0].size();
  int candies[n + 1][n + 1];
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      candies[i][j] = 0;
    }
  }

  candies[1][1] = grid[0][0];
  for (int i = 2; i <= n; i++) {
    candies[1][i] = candies[1][i - 1] + grid[0][i - 1];
  }
  for (int i = 2; i <= n; i++) {
    candies[i][1] = candies[i - 1][1] + grid[i - 1][0];
  }

  for (int i = 2; i <= n; i++) {
    for (int j = 2; j <= n; j++) {
      candies[i][j] = max(candies[i - 1][j], candies[i][j - 1]) + grid[i - 1][j - 1];
    }
  }

  return candies[n][n];
}

int main()
{
	int n;
	cin>>n;
	
	vector<vector<int>>a;
	
	for(int i=0;i<2;i++)
	{
		vector<int> t;
		for(int j=0;j<n;j++)
		{
			int temo;
			cin>>temo;
			t.push_back(temo);
		}
		a.push_back(t);
	}
	cout<<maxCandies(a)<<endl;
}

