#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int n, s, t, w = 0;
    cin >> n >> s >> t;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        w += a;
        if (s <= w && w <= t)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}