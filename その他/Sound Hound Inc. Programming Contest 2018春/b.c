#include <stdio.h>
int main()
{
    int n, l, r;
    int str[1000000];
    scanf("%d", &n);
    scanf("%d", &l);
    scanf("%d", &r);
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &str[i]);
        if (str[i] < l)
            printf("%d ", l);
        else if (str[i] > r)
            printf("%d ", r);
        else
            printf("%d ", str[i]);
    }
    return 0;
}
