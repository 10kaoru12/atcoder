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
        ios::sync_with_stdio(0);
        cout << fixed << setprecision(12);
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
#define int long long
#define MAX 1e9 + 7

/* function */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* main */
signed main(void)
{
    int a, b, q;
    int m = 0;
    int sum = 0;
    cin >> a >> b >> q;
    vector<double> s(a);
    vector<double> t(b);
    vector<double> x(q);
    rep(i, a)
    {
        cin >> s[i];
    }
    rep(i, b)
    {
        cin >> t[i];
    }
    rep(i, q)
    {
        cin >> x[i];
    }
    sort(all(s));
    sort(all(t));
    int anear;
    int bnear;
    rep(i, q)
    {
        sum = 0;
        int tmp;
        anear = MAX;
        bnear = MAX;
        rep(j, a)
        {
            if (anear > abs(x[i] - s[j]))
            {
                anear = abs(x[i] - s[j]);
                tmp = s[j];
            }
        }
        sum += anear;
        rep(j, b)
        {
            if (bnear > abs(tmp - t[j]))
            {
                bnear = abs(tmp - t[j]);
            }
        }
        sum += bnear;
        cout << sum << endl;
    }
    return 0;
}