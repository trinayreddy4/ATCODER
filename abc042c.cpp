#include <iostream>
#include <array>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> d(k);
    for (int i = 0; i < k; i++)
    {
        cin >> d[i];
    }

    for (int i = n; i < 100000; i++)
    {
        int tmp = i;
        bool flag = true;
        while (tmp > 0)
        {
            int digit = tmp % 10;
            for (int j = 0; j < k; j++)
            {
                if (digit == d[j])
                {
                    flag = false;
                    break;
                }
            }
            tmp /= 10;
        }
        if (flag)
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
