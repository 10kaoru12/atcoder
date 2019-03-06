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
    string c1;
    string c2;
    cin >> c1 >> c2;
    ((c1[0] == c2[2] && c1[2] == c2[0] && c1[1] == c2[1]) ? puts("YES") : puts("NO"));
    return 0;
}