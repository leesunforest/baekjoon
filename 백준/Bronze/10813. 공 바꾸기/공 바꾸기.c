#include <stdio.h>

int main()
{
    int n, m;
    int i, j, temp, a, b;
    int arr[101];

    scanf("%d %d", &n, &m);

    for (a = 1; a <= n; ++a)
    {
        arr[a] = a;
    }
    for (a = 0; a < m; ++a)
    {
        scanf("%d %d", &i, &j);

        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (a = 1; a <= n; ++a)
    {
        printf("%d ", arr[a]);
    }
}