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
bool chmax(T &a, const T &b) { return (a < b) ? (a = b, 1) : 0; }
template <class T>
bool chmin(T &a, const T &b) { return (b < a) ? (a = b, 1) : 0; }

/* define */
#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REP(i, 1, n + 1)
#define rrep(i, n) RREP(i, n, 0)
#define each(i, n) for (auto &i : n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define eunique(x) \
    sort(all(x));  \
    (x).erase(unique(all(x)), (x).end())
#define int long long
#define mp make_pair
#define r0 return 0

/* function */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* const */
const int inf = 1e9 + 7;
const int dxl[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dyl[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dxs[4] = {1, 0, -1, 0};
const int dys[4] = {0, 1, 0, -1};

/* main */
signed main(void)
{
    int m;
    cin >> m;
    cout << 24 + (24 - m) << endl;
    return 0;
}
