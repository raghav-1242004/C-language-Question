#include <stdio.h>

int main()
{
    int TotalSecond, s, m, h; // s= Second, m= minutes,  h= Hours
    printf("Second to Time Calculator\n");
    printf("Enter a Time in Second=");
    scanf("%d", &TotalSecond);
    h = s / 3600;
    m = s/60;
    printf("%d is the hour", h);
    printf("%d is the minute", m);
}