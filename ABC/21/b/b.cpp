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
#define MAX 1e9 + 7

/* func */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* main */
signed main(void)
{
    // int n, a, b, k;
    // cin >> n >> a >> b >> k;
    // vector<int> v(k);
    // rep(i, k)
    // {
    //     cin >> v[i];
    // }
    // v.push_back(a);
    // v.push_back(b);
    // int fsize = v.size();
    // sort(all(v));
    // eunique(v);
    // int esize = v.size();
    // cout << ((fsize == esize) ? "YES" : "NO") << endl;
    // return 0;

    int n, a, b, k;
    cin >> n >> a >> b >> k;
    set<int> s;
    s.insert(a);
    s.insert(b);
    rep(i, k)
    {
        int num;
        cin >> num;
        s.insert(num);
    }
    cout << (((s.size() == k + 2)) ? "YES" : "NO") << endl;
    return 0;
}