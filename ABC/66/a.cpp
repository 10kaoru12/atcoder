#include <bits/stdc++.h>
#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void)
{
    vector<int> num(3);
    rep(i, 3)
    {
        cin >> num[i];
    }
    sort(all(num));
    cout << num[0] + num[1] << endl;
    return 0;
}