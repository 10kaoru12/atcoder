#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int str;
    bool one = false;
    bool seven = false;
    bool nine = false;
    bool four = false;
    rep(i, 4)
    {
        cin >> str;
        if (str == 1)
        {
            one = true;
        }
        else if (str == 9)
        {
            nine = true;
        }
        else if (str == 7)
        {
            seven = true;
        }
        else if (str == 4)
        {
            four = true;
        }
    }
    if (one == true && seven == true && nine == true && four == true)
    {
        cout << "YES" << endl;
    }
    else if (one == 1 || seven == 1 || nine == 1 || four == 1)
    {
        cout << "NO" << endl;
    }
    return 0;
}