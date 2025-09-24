# include <stdio.h>
int main(){
    int a, b;   // a= First Value,  b= second Value
    printf("Enter your First Value:-    ");
    scanf("%d",&a);
    printf("Enter your Second Value:-   ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n\nYour First Value :- %d\n",a);
    printf("Your Second Value :- %d",b);
    return 0;
}