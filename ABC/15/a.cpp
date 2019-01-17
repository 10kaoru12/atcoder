#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    string a;
    string b;
    cin >> a >> b;
    if (a.size() > b.size())
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
    }
    return 0;
}