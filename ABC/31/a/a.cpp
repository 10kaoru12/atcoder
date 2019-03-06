#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int a, b, n;
    cin >> a >> b >> n;
    for (int i = n;; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << endl;
            return 0;
        }
    }
}