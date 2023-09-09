#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define INF 1000;
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> s(N);
    for (int i = 0; i < N; i++)
    {
        cin >> s.at(i);
        sort(s.at(i).begin(), s.at(i).end());
    }
    for (int i = 0; i < 26; i++)
    {
        int sumchar = INF;
        for (int j = 0; j < N; j++)
        {
            int count = 0;
            for (int k = 0; k < s.at(j).length(); k++)
            {
                if (s.at(j).at(k) < 'a' + i)
                    ;
                else if (s.at(j).at(k) == 'a' + i)
                    count++;
                else
                    break;
            }
            sumchar = min(sumchar, count);
        }
        for (int j = 0; j < sumchar; j++)
            cout << char(int('a') + i);
    }
    cout << endl;
}
