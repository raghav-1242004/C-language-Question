# include <stdio.h>
int main(){
    int a;
    printf("Enter a any one  value ");
    scanf("%d",&a);
    if (a%2==0)
        printf("%d is numer is Even",a);
    else
        printf("%d is number is odd",a);
    return 0;
}