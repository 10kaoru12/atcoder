#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP(i, 0, x);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void) {
  int a, b;
  cin >> a >> b;
  if (a == b) {
    cout << "Draw" << endl;
  } else if (a == 1) {
    cout << "Alice" << endl;
  } else if (b == 1) {
    cout << "Bob" << endl;
  } else if (a > b) {
    cout << "Alice" << endl;
  } else if (a < b) {
    cout << "Bob" << endl;
  }
  return 0;
}