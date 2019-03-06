#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    double a, b;
    cin >> a >> b;
    if (a / b < 1.5)
        cout << "4:3" << endl;
    else
        cout << "16:9" << endl;
    return 0;
}