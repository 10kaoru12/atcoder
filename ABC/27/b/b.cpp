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
#define eunique(x) (x).erase(unique(all(x)), (x).end())
//#define int long long
#define MAX 1e9 + 7

/* func */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* main */
signed main(void)
{
    int n;
    int avg;
    int sum = 0;
    int cnt = 0;
    int dur = 0;
    cin >> n;
    vector<int> v(n);
    rep(i, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    avg = sum / n;
    rep(i, n)
    {
        dur += avg - v[i];
        if (dur != 0)
        {
            cnt++;
        }
    }
    cout << ((dur != 0) ? -1 : cnt) << endl;
    return 0;
}