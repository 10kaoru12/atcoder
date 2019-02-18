#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) RREP(i, n, 0)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define MAX 1e9 + 7

using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

int main(void)
{
    int j;
    bool flag;
    string s;
    string t;
    cin >> s >> t;
    string at = "atcoder";
    int size = s.size();
    rep(i, size)
    {
        if (s[i] == t[i])
        {
            continue;
        }
        else if (s[i] == '@')
        {
            flag = false;
            for (j = 0; j < 7; j++)
            {
                if (t[i] == at[j])
                {
                    flag = true;
                }
                if (flag)
                {
                    break;
                }
            }
            if (!flag)
            {
                cout << "You will lose" << endl;
                return 0;
            }
        }
        else if (t[i] == '@')
        {
            flag = false;
            for (j = 0; j < 7; j++)
            {
                if (s[i] == at[j])
                {
                    flag = true;
                }
                if (flag)
                {
                    break;
                }
            }
            if (!flag)
            {
                cout << "You will lose" << endl;
                return 0;
            }
        }
        else
        {
            cout << "You will lose" << endl;
            return 0;
        }
    }
    cout << "You can win" << endl;
    return 0;
}
