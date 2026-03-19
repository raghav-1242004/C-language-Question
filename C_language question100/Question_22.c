// 22.	Input two numbers, swap without third variable.
# include<stdio.h>
int main(){
    int a,b;
    printf("Enter a First Value:-   ");
    scanf("%d",&a);
    printf("Enter a second Vlaue:-  ");
    scanf("%d",&b);
    a = a+b;
    b = a - b;
    a = a - b;
    printf("\n After a Swaping\n");
    printf("First Value :- %d\n",a);
    printf("Second Value:-  %d",b);
    return 0;
}