#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int i, j, k;
    int arr[101] = {0};

    for (int a = 0; a < m; ++a)
    {
        scanf("%d %d %d", &i, &j, &k);
        for (int b= i; b <= j; ++b)
            arr[b - 1] = k;
    }
    for (int a = 0; a < n; ++a)
        printf("%d ", arr[a]);
}