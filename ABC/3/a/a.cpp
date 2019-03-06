#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    double N;
    double ans = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        ans += (i * 10000) / N;
    }
    cout << ans << endl;
    return 0;
}