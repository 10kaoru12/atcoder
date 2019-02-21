#include <bits/stdc++.h>

//using
using namespace std;

//struct
struct Fast
{
    Fast()
    {
        std::cin.tie(0);
        ios::sync_with_stdio(false);
    }
} fast;

//define
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

//func
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

signed main(void)
{
    auto start = chrono::system_clock::now();
    int a = 8, b = 1;
    //cin >> a >> b;
    if (abs(a - b) > 5)
    {
        cout << (9 - abs(a - b)) + 1 << endl;
    }
    else
    {
        cout << abs(a - b) << endl;
    }
    auto end = chrono::system_clock::now();
    auto sec = chrono::duration_cast<chrono::microseconds>(end - start).count();
    cout << sec << endl;
    return 0;
}