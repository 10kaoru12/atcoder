#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); i--)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) RREP(i, n, 0)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void)
{
    string s;
    cin >> s;
    (((s[0] == s[1] && s[1] == s[2]) || (s[1] == s[2] && s[2] == s[3])) ? puts("Yes") : puts("No"));
    return 0;
}