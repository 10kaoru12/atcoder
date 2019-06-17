#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a != b && a != c)
    {
        cout << a << endl;
    }
    else if (b != a && b != c)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }
    return 0;
}
