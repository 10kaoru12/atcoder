#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int s;
    int cnt = 1;
    cin >> s;
    if (s == 4 || s == 2 || s == 1)
    {
        cout << 4 << endl;
        return 0;
    }
    while (s != 1)
    {
        if (s % 2 == 0)
        {
            s /= 2;
        }
        else if (s % 2 == 1)
        {
            s = 3 * s + 1;
        }
        cnt++;
    }
    cnt++;
    cout << cnt << endl;
    return 0;
}