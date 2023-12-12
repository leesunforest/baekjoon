#include <stdio.h>

int main(void)
{
    int h;
    int m;
    int t;

    scanf("%d %d\n %d", &h, &m, &t);

    int min = 60 * h + m;
    min += t;

    int hour = (min / 60) % 24; 
    int minute = min % 60; 

    printf("%d %d", hour, minute);
}