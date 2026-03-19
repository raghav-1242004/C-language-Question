// 29.	Input a number, check odd/even.
# include <stdio.h>
int main(){
    int a;
    printf("Enter any one Value:-   ");
    scanf("%d",&a);
    if (a%2 == 0){
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}