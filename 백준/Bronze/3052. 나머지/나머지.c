#include <stdio.h>

int main()
{
    int input, result = 0;
    int i, j;
    int arr[10];

    for (i = 0; i< 10; ++i)
    {
        scanf("%d", &input);
        arr[i] = (input % 42);
    }
    for (i = 0; i < 10; ++i)
    {
        int count = 0;
        for (j = i+1; j < 10; ++j)
        {
            if (arr [i] == arr[j])
                ++count;
        }
        if (count == 0)
            ++result;
    }
    printf("%d", result);
}