#include <stdio.h>

int main(void)
{
    int score;
    scanf ("%d", &score);
    if (100 >= score && score >= 90) 
        printf("%s", "A");
    else if (score >= 80) 
        printf("%s", "B");
    else if (score >= 70) 
        printf("%s", "C");
    else if (score >= 60) 
        printf("%s", "D");
    else
        printf("%s", "F");
}