// 3.	Take two integers as input and print their difference.
# include <stdio.h>
int main(){
    int a,b,diff; // a= first number, b= second numberand diff= difference
    printf("Enter a First number");
    scanf("%d",&a);
    printf("Enter a second Number");
    scanf("%d",&b);
    diff=a-b;
    printf("%d-%d=%d",a,b,diff);
    return 0;

}