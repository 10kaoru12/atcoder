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
    string s;
    cin >> s;
    string sy;
    int iy;
    sy = s.substr(0, 4);
    iy = stoi(sy);
    string sm;
    int im;
    sm = s.substr(5, 2);
    im = stoi(sm);
    string sd;
    int id;
    sd = s.substr(8, 2);
    id = stoi(sd);
    string ans = sy + sm + sd;
    int ians = stoi(ans);
    if (ians > 20190430)
    {
        cout << "TBD" << endl;
    }
    else
    {
        cout << "Heisei" << endl;
    }
    return 0;
}