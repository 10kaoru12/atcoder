#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    int quo;
    int rem;
    int num;
    quo = n / 2;
    rem = n % 2;
    cout << quo + rem << endl;
    if (n != 1)
    {
        rep(i, quo)
        {
            cout << 2 << endl;
        }
    }
    if (n % 2 != 0)
    {
        cout << rem << endl;
    }
    return 0;
}