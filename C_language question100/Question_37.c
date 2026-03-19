// 37.	Input number, check divisible by 2 and 3 both.
# include <stdio.h>
int main(){
    int input;
    printf("Enter an any Number:-   ");
    if (scanf("%d",&input) == 1){
        if ((input % 6 ) == 0){             // We shall Divide by 6 because if Number is divisible by 6 also divisible by 2 and 3
            printf("Your number is Divisible by 2 and 3");
        }
        else {
            printf("Number is not Divisible by 2 and 3");
        }
    }
    else {
        printf("Enter correct Input");
    }
    return 0;
    
}