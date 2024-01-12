#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    int n;
    scanf("%d", &n);

    int i = 0;
    int total = 0;
    while (i < n)
    {
        int a, b;
        scanf("%d %d",&a, &b);
        total += a * b;
        ++i;
    }
    if (x == total)
        printf("Yes");
    else
        printf("No");
}