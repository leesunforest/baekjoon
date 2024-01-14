#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= n/4)
    {
        printf("long ");
        ++i;
    }
    printf("int");
}