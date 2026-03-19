// 7.	Input a number and print its square.
# include <stdio.h>
int main(){
    int a ,b;
    printf("Enter a value of A");
    scanf("%d",&a);
    b = a;
    a *=a;
    printf("Square of %d =%d",b,a);
    return 0;
}