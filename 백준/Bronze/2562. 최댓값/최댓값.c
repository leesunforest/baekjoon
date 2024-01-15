#include <stdio.h>

int main()
{
    int max = 0;
    int n;
    int a[9];

    for(int i = 0; i < 9; ++i)
    {
        scanf("%d", &a[i]);
        if(a[i] > max)
        {
            max = a[i];
            n = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d", n);
}