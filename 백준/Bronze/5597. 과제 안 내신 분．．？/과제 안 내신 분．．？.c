#include <stdio.h>

int main()
{
    int id[31] = {0};
    int i, n;

    for (i = 0; i < 28; ++i)
    {
        scanf("%d", &n);
        id[n] = 1;
    }
    for (i = 1; i <= 30; ++i)
    {
        if (id[i] == 0)
        {
            printf("%d\n", i);
        }
    }
}