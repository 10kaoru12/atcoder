#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    vector<int> num(3);
    rep(i, 3) cin >> num[i];
    sort(num.begin(), num.end());
    cout << num[1] << endl;
    return 0;
}