#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;

int main(void)
{
    int n;
    vector<int> a(10000);
    int num = 0;
    int cnt = 1;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            cnt++;
        }
        else if (a[i] != a[i + 1])
        {
            num += (cnt / 2);
            cnt = 0;
            cnt++;
        }
    }
    num += (cnt / 2);
    cout << num << endl;
    return 0;
}