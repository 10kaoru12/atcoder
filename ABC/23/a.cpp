#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int x;
    cin >> x;
    int num1, num2, ans;
    num1 = x % 10;
    x /= 10;
    num2 = x % 10;
    cout << num1 + num2 << endl;
    return 0;
}