/* include */
#include <bits/stdc++.h>

/* using */
using namespace std;

/* main constructor */
struct Fast
{
    Fast()
    {
        std::cin.tie(0);
        ios::sync_with_stdio(false);
    }
} fast;

/* define */
#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REP(i, 1, n + 1)
#define rrep(i, n) RREP(i, n, 0)
#define each(i, n) for (auto &i : n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define eunique(x) (x).erase(unique(all(x), (x).end()))
#define int long long
#define MAX 1e9 + 7
#define int1(x)  \
    long long x; \
    scanf(" %lld ", &x);
#define int2(x)        \
    long long(x), (y); \
    scanf(" %lld %lld ", &x, &y);

/* func */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* main */
signed main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c && a - b == c)
    {
        cout << '?' << endl;
    }
    else if (a + b == c)
    {
        cout << '+' << endl;
    }
    else if (a - b == c)
    {
        cout << '-' << endl;
    }
    else
    {
        cout << '!' << endl;
    }
    return 0;
}