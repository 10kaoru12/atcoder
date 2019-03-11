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
#define eunique(x) \
    sort(all(x));  \
    (x).erase(unique(all(x)), (x).end())
#define int long long
#define mp make_pair

/* function */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* const */
const int inf = 1e9 + 7;

/* main */
signed main(void)
{
    const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
    int w, h, nx, ny, cnt;
    cin >> h >> w;
    array<string, 100> v;
    rep(i, h)
    {
        cin >> v[i];
    }
    rep(i, h)
    {
        rep(j, w)
        {
            if (v[i][j] == '#')
            {
                continue;
            }
            cnt = 0;
            rep(k, 8)
            {
                nx = i + dx[k];
                ny = j + dy[k];
                try
                {
                    if (v.at(nx).at(ny) == '#')
                    {
                        cnt++;
                    }
                }
                catch (out_of_range &e)
                {
                    continue;
                }
            }
            v[i][j] = cnt + '0';
        }
    }
    rep(i, h)
    {
        cout << v[i] << endl;
    }
    return 0;
}