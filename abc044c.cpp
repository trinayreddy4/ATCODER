#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;
using ld = long double;
using ll = long long;

int n, k, arr[55];
ll dp[55][5099];
int main()
{
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i ++){
        scanf("%d", arr + i);
        arr[i] -= k;
    }
    dp[0][2500] = 1;
    for(int i = 1; i <= n; i ++){
        for(int j = -2500; j <= 2500; j ++){
            dp[i][j + 2500] = dp[i - 1][j + 2500];
            if(-2500 <= j - arr[i] && j - arr[i] <= 2500) dp[i][j + 2500] += dp[i - 1][j - arr[i] + 2500];
        }
    }
    printf("%lld", dp[n][2500] - 1);
    return 0;
}

