#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int a, b, c, k, s, t;
    int ans;
    cin >> a >> b >> c >> k >> s >> t;
    if (s + t >= k)
    {
        ans = (s * a + t * b - ((s + t) * c));
    }
    else
    {
        ans = s * a + t * b;
    }
    cout << ans << endl;
    return 0;
}