#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> books(N + 1);
    vector<int> inDegree(N + 1, 0);
    
    for (int i = 1; i <= N; ++i) {
        int C;
        cin >> C;
        
        for (int j = 0; j < C; ++j) {
            int P;
            cin >> P;
            books[P].push_back(i);
            inDegree[i]++;
        }
    }
    
    queue<int> q;
    for (int i = 1; i <= N; ++i) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }
    
    vector<int> readingOrder;
    while (!q.empty()) {
        int book = q.front();
        q.pop();
        readingOrder.push_back(book);
        
        for (int nextBook : books[book]) {
            inDegree[nextBook]--;
            if (inDegree[nextBook] == 0) {
                q.push(nextBook);
            }
        }
    }
    
    for (int i = 1; i < readingOrder.size(); ++i) {
        cout << readingOrder[i] << " ";
    }
    cout << endl;

    return 0;
}

