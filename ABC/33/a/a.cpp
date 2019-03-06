#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    string s;
    cin >> s;
    for (int i = 0; i < 4; i++)
    {
        if (s[0] != s[i])
        {
            cout << "DIFFERENT" << endl;
            return 0;
        }
    }
    cout << "SAME" << endl;
    return 0;
}