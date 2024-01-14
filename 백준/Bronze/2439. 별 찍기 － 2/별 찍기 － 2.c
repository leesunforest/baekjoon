#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x = 1;
    while (x <= n)
    {
        int y = 1;
        while (y <= n - x)
        {
            printf(" ");
            ++y;
        }
        int z = 1;
        while (z <= x)
        {
            printf("*");
            ++z;
        }
        printf("\n");
        ++x;
    }
}