#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int main(){
    cin >> a >> b >> c;
    int p = max(a, max(b, c));
    int num = p - a + p - b + p - c;
    if(num & 1){
        cout << ((num + 3) >> 1) << '\n';
    }
    else{
        cout << (num >> 1) << '\n';
    }
}
