#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int a, b, c, ac, bc, cc;
    cin >> a >> b >> c;
    ac = 3 - (a > b) - (a > c);
    bc = 3 - (b > a) - (b > c);
    cc = 3 - (c > a) - (c > b);
    cout << ac << endl
         << bc << endl
         << cc << endl;
    return 0;
}