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
        //cout << fixed << setprecision(12);
    }
} fast;

/* template */
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}

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

/* function */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* const */
const int inf = 1e9 + 7;

/* main */
signed main(void)
{
    // string s;
    // int cnt = 0;
    // cin >> s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
    //     {
    //         s.erase(i, 2);
    //         cnt += 2;
    //         i = 0;
    //     }
    // }
    // if ((s[0] == '0' && s[1] == '1') || (s[0] == '1' && s[1] == '0'))
    // {
    //     cnt += 2;
    // }
    // cout << cnt << endl;
    string s;
    cin >> s;
    int cnt1, cnt0;
    cnt1 = count(all(s), '1');
    cnt0 = count(all(s), '0');
    cout << min(cnt1, cnt0) * 2 << endl;
    return 0;
}