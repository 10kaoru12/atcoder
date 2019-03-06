#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << y - x % y << endl;
    }
    return 0;
}