#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) RREP(i, n, 0)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1e9 + 7

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

// int main(void)
// {
//     auto start = chrono::system_clock::now();
//     int n;
//     cin >> n;
//     vector<int> s(n);
//     rep(i, n)
//     {
//         cin >> s[i];
//     }
//     sort(all(s));
//     reverse(all(s));
//     rep(i, n - 1)
//     {
//         if (s[i] != s[i + 1])
//         {
//             cout << s[i + 1] << endl;
//             break;
//         }
//         else
//         {
//             continue;
//         }
//     }
//     auto end = chrono::system_clock::now();
//     auto dur = end - start;
//     auto msec = chrono::duration_cast<chrono::seconds>(dur).count();
//     cout << endl;
//     cout << msec << endl;
//     return 0;
// }
int main(void)
{
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n)
    {
        cin >> s[i];
    }
    sort(all(s));
    reverse(all(s));
    s.erase(unique(all(s)), s.end());
    cout << s[1] << endl;
    return 0;
}