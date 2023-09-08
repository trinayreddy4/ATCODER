#include "bits/stdc++.h"
using namespace std;
int main(void) {
	long long int x;
	cin >> x;

	if (x <= 6)cout << 1 << endl;
	else {
		long long int ans = (x / 11) * 2;
		if (x % 11 > 6) ans += 2;
		else if (x % 11 == 0);
		else ans++;
		cout << ans << endl;
	}
}

