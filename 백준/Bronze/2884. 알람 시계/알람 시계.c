#include <stdio.h>

int main(void)
{
    int h;
    int m;
    scanf("%d %d",&h, &m);
    if (m < 45) 
        if (h == 0)
            printf("%d %d", h + 23, m + 15);
        else
            printf("%d %d", h - 1, m + 15);
    else
        printf("%d %d", h, m - 45);
}
