#include <stdio.h>

int main(void)
{
    int i;
    int n;
    scanf("%d", &n);

    for(i = 1; i <= 9; i++)
    {   
        printf("%d * %d = %d\n", n, i, n*i);
    }
}