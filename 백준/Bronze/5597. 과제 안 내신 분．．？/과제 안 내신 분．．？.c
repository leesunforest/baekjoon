#include <stdio.h>

int main()
{
    int id[31] = {0};
    int i, n;

    for (i = 0; i < 28; ++i)
    {
        scanf("%d", &n);
        id[n] = 1;
    }
    for (i = 1; i <= 30; ++i)
    {
        if (id[i] == 0)
        {
            printf("%d\n", i);
        }
    }
}

// if(!id[i])로 도 표현가능. !로 논리결과 뒤집었으므로 value가 0 일때 true
