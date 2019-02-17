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

int main(void)
{
    double m;
    cin >> m;
    m /= 1000;
    if (m < 0.1)
    {
        cout << 0 << 0 << endl;
    }
    else if (m <= 5)
    {
        if (m < 1)
        {
            cout << 0 << m * 10 << endl;
        }
        else
        {
            cout << m * 10 << endl;
        }
    }
    else if (m <= 30)
    {
        cout << m + 50 << endl;
    }
    else if (m <= 70)
    {
        cout << (((m - 30) / 5) + 80) << endl;
    }
    else
    {
        cout << 89 << endl;
    }
    return 0;
}