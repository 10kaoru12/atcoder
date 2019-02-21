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
    int n;
    string s;
    cin >> n >> s;
    if (n % 2 == 0)
    {
        cout << "-1" << endl;
        return 0;
    }
    else if (n % 2 != 0)
    {
        for (int i = n - 1; i > n / 2; i--)
        {
            if (s[i] == 'c' && s[(n - 1) - i] == 'a')
            {
                break;
            }
            else if (s[i] == 'a' && s[(n - 1) - i] == 'c')
            {
                break;
            }
            else if (s[i] == 'b' && s[(n - 1) - i] == 'b')
            {
                break;
            }
            else
            {
                cout << "-1" << endl;
                return 0;
            }
        }
        if (s[n / 2] == 'b')
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << n / 2 << endl;
    return 0;
}