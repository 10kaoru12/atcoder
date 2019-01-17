#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int s, e;
    int sum = 0;
    rep(i, 3)
    {
        cin >> s >> e;
        sum += s * (e * 0.1);
    }
    cout << sum << endl;
    return 0;
}