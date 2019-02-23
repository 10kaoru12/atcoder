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
#define int long long
#define MAX 1e9 + 7

/* func */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* main */
signed main(void)
{
    // string s;
    // cin >> s;
    // vector<int> v(6, 0);
    // rep(i, s.size())
    // {
    //     switch (s[i])
    //     {
    //     case 'A':
    //         v[0]++;
    //         break;
    //     case 'B':
    //         v[1]++;
    //         break;
    //     case 'C':
    //         v[2]++;
    //         break;
    //     case 'D':
    //         v[3]++;
    //         break;
    //     case 'E':
    //         v[4]++;
    //         break;
    //     case 'F':
    //         v[5]++;
    //         break;
    //     default:
    //         break;
    //     }
    // }
    // rep(i, 6)
    // {
    //     if (i == 5)
    //     {
    //         cout << v[i] << endl;
    //     }
    //     else
    //     {
    //         cout << v[i] << " ";
    //     }
    // }
    string s;
    cin >> s;
    string af = "ABCDEF";
    int cnt[6];
    rep(i, af.size())
    {
        cnt[i] = count(all(s), af[i]);
    }
    rep(i, 6)
    {
        if (i == 5)
        {
            cout << cnt[i] << endl;
        }
        else
        {
            cout << cnt[i] << " ";
        }
    }
    return 0;
}