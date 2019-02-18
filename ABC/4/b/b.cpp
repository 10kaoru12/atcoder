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
//     vector<vector<char>> v1(4, vector<char>(4, 0));
//     vector<vector<char>> v2(4, vector<char>(4, 0));
//     rep(i, 4)
//     {
//         rep(j, 4)
//         {
//             cin >> v1[i][j];
//         }
//     }
//     rep(i, 4)
//     {
//         rep(j, 4)
//         {
//             v2[j][i] = v1[i][j];
//         }
//     }
//     rep(i, 4)
//     {
//         reverse(all(v2[i]));
//     }
//     rep(i, 4)
//     {
//         rep(j, 4)
//         {
//             v1[j][i] = v2[i][j];
//         }
//     }
//     rep(i, 4)
//     {
//         reverse(all(v1[i]));
//     }
//     rep(i, 4)
//     {
//         rep(j, 4)
//         {
//             cout << v1[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
int main(void)
{
    vector<vector<char>> in(4, vector<char>(4, 0));
    vector<vector<char>> out(4, vector<char>(4, 0));
    rep(i, 4)
    {
        rep(j, 4)
        {
            cin >> in[i][j];
        }
    }
    rrep(i, 4)
    {
        rrep(j, 4)
        {
            out[i][j] = in[3 - i][3 - j];
        }
    }
    rep(i, 4)
    {
        rep(j, 4)
        {
            cout << out[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}