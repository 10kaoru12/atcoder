#include <iostream>
using namespace std;
int main(void)
{
    int h, w;
    cin >> h >> w;
    char s[h][w];
    char str[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (s[i][j] == '#')
            {
                if (s[i + 1][j] == '.')
                {
                }
            }
        }
    }
}