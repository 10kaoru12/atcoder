#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int h, w;
    cin >> n >> h >> w;
    int a, b;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (h <= a)
        {
            if (w <= b)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
