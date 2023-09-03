#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    string S;
    cin >> S;

    vector<vector<int>> colorPositions(M + 1);

    for (int i = 0; i < N; ++i) {
        int Ci;
        cin >> Ci;
        colorPositions[Ci].push_back(i);
    }

    for (int color = 1; color <= M; ++color) {
        for (int i = 0; i < colorPositions[color].size(); ++i) {
            int currentPos = colorPositions[color][i];
            int nextPos = colorPositions[color][(i + 1) % colorPositions[color].size()];
            S[nextPos] = S[currentPos];
        }
    }

    cout << S << endl;

    return 0;
}

