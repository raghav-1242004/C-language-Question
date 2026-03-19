// 2.	Print two numbers and their sum.
# include <stdio.h>
int main (){
    int a,b;
    printf("Enter first number: ");
    scanf ("%d",&a);
    printf("Enter second number: ");
    scanf ("%d",&b);
    int sum=a+b;
    printf ("The two numbers are %d and %d\n",a,b);
    printf ("The sum of two numbers is %d",sum);
    return 0;
}