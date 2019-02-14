#include <cstdio>
int a, b;
char s[100];
int main()
{
    scanf("%d%d", &a, &b);
    scanf("%s", s);
    for (int i = 0; i < a; i++)
    {
        if (!('0' <= s[i]) && (s[i] <= '9'))
        {
            puts("No");
            return 0;
        }
    }
    if (s[a] != '-')
    {
        puts("No");
        return 0;
    }
    for (int i = a + 1; i <= a + b; i++)
    {
        if (!('0' <= s[i]) && (s[i] <= '9'))
        {
            puts("No");
            return 0;
        }
    }
    puts("Yes");
    return 0;
}