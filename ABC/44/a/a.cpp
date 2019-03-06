#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    if (n <= k)
    {
        cout << n * x << endl;
    }
    else
    {
        cout << k * x + (n - k) * y << endl;
    }
    return 0;
}