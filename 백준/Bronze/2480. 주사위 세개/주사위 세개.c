#include <stdio.h>

int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    int max = x;
    if (x==y && y==z)
        printf("%d",10000 + x * 1000);
    else if (x==y || y==z || z==x)
    {   
        if (x==y)
            printf("%d", 1000 + x * 100);
        else if (y==z)
            printf("%d", 1000 + y * 100);
        else
            printf("%d", 1000 + z * 100);
    }   
    else
    {   
        if (y > max)
            max = y;
        if (z > max)
            max = z;
        printf("%d", max * 100);
    }   
    return 0;
}