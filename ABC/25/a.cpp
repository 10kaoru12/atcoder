#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int n;
    string s;
    cin >> s >> n;
    cout << s[(n - 1) / s.size()] << s[(n - 1) % s.size()] << endl;
    return 0;
}