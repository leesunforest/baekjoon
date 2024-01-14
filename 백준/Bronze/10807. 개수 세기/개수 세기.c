#include <stdio.h>

int main()
{
    int n,v;
    int sum = 0;
    scanf("%d", &n);
    int a[n];

    int i = 0;
    while (i < n)
    {
        scanf("%d", &a[i]);
        ++i;
    }
    scanf("%d", &v);

    int j = 0;
    while (j < n)
    {
        if(v == a[j])
            ++sum;
        ++j;
    }
    printf("%d", sum);
}