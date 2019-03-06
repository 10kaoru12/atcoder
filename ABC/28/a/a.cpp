#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int n;
    cin >> n;
    if (n <= 59)
        cout << "Bad" << endl;
    else if (n >= 60 && n <= 89)
        cout << "Good" << endl;
    else if (n >= 90 && n <= 99)
        cout << "Great" << endl;
    else if (n == 100)
        cout << "Perfect" << endl;
    return 0;
}