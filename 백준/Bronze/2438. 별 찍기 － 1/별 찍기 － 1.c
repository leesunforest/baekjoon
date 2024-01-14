#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x = 1;
    while (x <= n)
    {
        int y = 1;
        while (y <= x)
        {
            printf("*");
            ++y;
        }
        printf("\n");
        ++x;
    }
} 