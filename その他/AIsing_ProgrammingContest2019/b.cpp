#include <iostream>
using namespace std;
int main(void)
{
    int n;
    int a, b;
    int p[100];
    int acnt = 0;
    int bcnt = 0;
    int ccnt = 0;
    int count = 0;
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (p[i] <= a)
        {
            acnt++;
        }
        if (a + 1 <= p[i] && p[i] <= b)
        {
            bcnt++;
        }
        if (p[i] >= b + 1)
        {
            ccnt++;
        }
    }
    while (acnt != 0 && bcnt != 0 && ccnt != 0)
    {
        acnt--;
        bcnt--;
        ccnt--;
        count++;
    }
    cout << count << endl;
    return 0;
}