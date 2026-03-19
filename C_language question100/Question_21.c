// 21.	Input two numbers, swap using third variable.
# include <stdio.h>
int main(){
    int a, b,c ;
    printf("Enter a First Value:-   ");
    scanf("%d",&a);
    printf("Enter a Second Value:-  ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;

    printf("First Value:-  %d \n",a);
    printf("Second Value :- %d",b);
    return 0;
}