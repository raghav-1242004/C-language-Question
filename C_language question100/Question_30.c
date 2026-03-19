// 30.	Input a number, check positive/negative/zero.
# include <stdio.h>
int main(){
    int a;
    printf("Enter an any number:-   ");
    // scanf("%d",&a);
    if (scanf("%d", &a) == 1) {     // if input is integer then true(1) not false(0)
    // if ((a >= 0) || (a<0)){
        if (a>0){
            printf("Number is Positive");
        }
        else if (a<0) {
            printf("Number is Negative");
        }
        else {
            printf("Number is Zero");
        }
    }
    else{
        printf("Please Enter Correct Number");
    }
    return 0;
    
}