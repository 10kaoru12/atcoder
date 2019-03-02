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
#define int long long

/* function */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* const */
const int inf = 1e9 + 7;

/* main */
signed main(void)
{
    int w, h, n;
    cin >> w >> h >> n;
    bool str[w][h] = {0};
    rep(i, n)
    {
        int x, y, a;
        cin >> x >> y >> a;
        switch (a)
        {
        case 1:
            rep(j, x)
            {
                rep(k, h)
                {
                    str[j][k] = 1;
                }
            }
            break;

        case 2:
            for (int j = x; j < w; j++)
            {
                rep(k, h)
                {
                    str[j][k] = 1;
                }
            }
            break;

        case 3:
            rep(j, w)
            {
                rep(k, y)
                {
                    str[j][k] = 1;
                }
            }
            break;

        case 4:
            rep(j, w)
            {
                for (int k = y; k < h; k++)
                {
                    str[j][k] = 1;
                }
            }
            break;

        default:
            break;
        }
    }
    int count = 0;
    rep(i, w)
    {
        rep(j, h)
        {
            if (str[i][j] == 0)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}