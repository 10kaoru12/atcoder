#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int a, b, c;
  int ans = 0;
  cin >> a >> b >> c;

  ans += (a != b) ? 1 : 0;
  ans += (b != c) ? 1 : 0;
  ans += (c != a) ? 1 : 0;
  ans += (a == b && b == c) ? 1 : 0;

  cout << ans << endl;

  return 0;
}