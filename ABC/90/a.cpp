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
    string str[3];
    cin >> str[0] >> str[1] >> str[2];
    cout << str[0][0] << str[1][1] << str[2][2] << endl;
    return 0;
}