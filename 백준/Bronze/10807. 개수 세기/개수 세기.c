#include <stdio.h>

int main()
{
    int n,v;
    int i,j;
    int sum = 0;
    scanf("%d", &n);
    int a[n];

    i = 0;
    while (i < n)
    {
        scanf("%d", &a[i]);
        ++i;
    }
    scanf("%d", &v);

    j = 0;
    while (j < n)
    {
        if(v == a[j])
            ++sum;
        ++j;
    }
    printf("%d", sum);
}