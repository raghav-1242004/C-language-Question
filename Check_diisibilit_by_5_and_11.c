# include <stdio.h>
int main(){
    int a;
    printf("Enter your value:-     ");
    scanf("%d",&a);
    if (a % 5 == 0 || a % 11 == 0){
        printf("\n\n");
        printf("%d is a divisible by 5 and 11",a);
    }
        else{
        printf("%d is not divisible by 5 and 11",a);}
    return 0;
}