#include <stdio.h>
int main()
{
    char s[10], h[10];
    scanf("%s", s);
    scanf("%s", h);
    if ((s[0] == 'S') && (h[0] == 'H'))
    {
        printf("YES");
        return 0;
    }
    else
    {
        printf("NO");
        return 0;
    }
}
