// 5.	Input two numbers and print their division (quotient).
# include <stdio.h>
int main(){
    float a, b;
    printf("Enter a value of a ");
    scanf("%f",&a);
    printf("Enter a value of b");
    scanf("%f",&b);
    float div = a / b;
    printf("%f / %f = %2f    (Quotient)",a,b,div);
    return 0;
}