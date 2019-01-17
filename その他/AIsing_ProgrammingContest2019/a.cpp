#include <iostream>
using namespace std;
int main(void)
{
    int n, h, w;
    int tmp1 = 1;
    int tmp2 = 1;
    int ans;
    cin >> n >> h >> w;
    tmp1 += n - w;
    tmp2 += n - h;
    ans = tmp1 * tmp2;
    cout << ans << endl;
}