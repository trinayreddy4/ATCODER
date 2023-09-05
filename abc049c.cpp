#include <iostream>
using namespace std;

int main() {
  string S;
  cin >> S;
  int i = int(S.size()) - 1;
  while (i >= 0) {
    if (i < 4) break;
    else if (S.substr(i - 4, 5) == "dream" || S.substr(i - 4, 5) == "erase") i -= 5;
    else if (i < 5) break;
    else if (S.substr(i - 5, 6) == "eraser") i -= 6;
    else if (i < 6) break;
    else if (S.substr(i - 6, 7) == "dreamer") i -= 7;
    else break;
  }
  if (i == -1) cout << "YES";
  else cout << "NO";
  return 0;
}
