#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    int ans = X * A + Y * B;

    for (int i = 0; i <= max(X, Y) * 2; i += 2) {
        int p = max(X - i / 2, 0) * A + max(Y - i / 2, 0) * B + i * C;
        ans = p < ans ? p : ans;
    }

    cout << ans << endl;
}
