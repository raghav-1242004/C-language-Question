// 15. Write a program to print all Armstrong numbers between 1 and 500.
#include <stdio.h>

int main()
{
    int num, original, remainder;
    int result;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for(num = 1; num <= 500; num++)
    {
        original = num;
        result = 0;

        while(original != 0)
        {
            remainder = original % 10;
            result = result + (remainder * remainder * remainder);
            original = original / 10;
        }

        if(result == num)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}
