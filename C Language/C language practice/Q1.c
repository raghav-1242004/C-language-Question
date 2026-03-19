#include <stdio.h>

int main() {
    int a,c,flag, temp;
    printf("Enter a number :=");
    scanf("%d",&a);
    flag = a/10;
    temp =a%10;
    c = flag + temp;
    printf("sum of a and b=%d",c );
    return 0;
}