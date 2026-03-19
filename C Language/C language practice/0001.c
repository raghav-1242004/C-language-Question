# include <stdio.h>
int main(){
    int a;
    printf("Enter a value of a ");
    scanf("%d",a);
    if ((a%5==0) && (a%11==0))
        printf("%d is a divisible by 5 and 11");
    else
        printf("%d is not divisible by 5 and 11");
    return 0;
}