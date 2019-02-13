#include <iostream>
using namespace std;
int main(void)
{
    int n;
    int ans = 0;
    cin >> n;
    while (n / 10 != 0)
    {
        if (n % 10 == 2)
        {
            ans++;
        }
        n /= 10;
    }
    if (n % 10 == 2)
    {
        ans++;
    }
    cout << ans << endl;
}
