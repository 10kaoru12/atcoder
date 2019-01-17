#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    string s;
    string k = "keyence";
    string tmp;
    size_t size;
    cin >> s;
    size = s.size();
    rep(i, size)
    {
        for (int j = i; j <= size; j++)
        {
            tmp = s.substr(0, i) + s.substr(j);
            if (k == tmp)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}