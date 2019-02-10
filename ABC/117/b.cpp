#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int sum = 0;
  for (int i = 0; i < n - 1; i++) {
    sum += v[i];
  }
  if (v[n - 1] < sum) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}