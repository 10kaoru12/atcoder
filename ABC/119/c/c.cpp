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
    int n;
    int point = 0;
    cin >> n;
    vector<int> l(3);
    rep(i, 3)
    {
        cin >> l[i];
    }
    vector<int> v(n);
    rep(i, n)
    {
        cin >> v[i];
    }
    int near;
    sort(all(v));
    rep(i, 3)
    {
        rep(j, n)
        {
            auto findresult = (find(all(v)), l[i]);
            if (findresult == v.end())
            {
                int near;
                rep(k, n)
                {
                    near = MAX;
                    if (near > abs(l[i] - v[k]))
                    {
                        near = abs(l[i] - v[k]);
                    }
                }
                int mine = min({(l[i] - (near + 1)), (l[i] - (near - 1)), (l[i] - (near + v[v.size() - 1]))})
                    rep(l, 3)
                {
                    if((l[i] - (near + 1)==mine){
                        point += l[i] - near;
                    }
                    else if((l[i] - (near - 1)==mine){
                        point += near - l[i];
                    }
                    else{

                    }
                }
            }
            else
            {
            }
        }
    }
}