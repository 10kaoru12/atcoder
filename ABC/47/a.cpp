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
  vector<int> s(3);
  for (int i = 0; i < 3; i++) {
    cin >> s[i];
  }
  sort(all(s));
  if (s[2] == (s[1] + s[0])) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}