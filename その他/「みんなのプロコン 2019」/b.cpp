#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int k, y, x;
  cin >> k >> y >> x;
  string s = "yfkpo";
  int num1 = ((k * y) / 5);
  for (int i = 0; i < num1; i++) {
    s += "yfkpo";
  }
  int size = s.size();
  int num2 = k * y;
  int erase = size - num2;
  for (int i = 0; i < erase; i++) {
    s.pop_back();
  }
  string ans = s.substr(num2 - k, k);
  if (y % 2 == 0) {
    reverse(ans.begin(), ans.end());
  }
  cout << ans[x - 1] << endl;
  return 0;
}