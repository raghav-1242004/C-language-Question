//  30. Input number, check divisible by 5 or not.
# include <stdio.h>
int main(){
    int input;
    printf("Enter an any Number:-   ");
    if (scanf("%d",&input)==1){
        if ((input % 5) == 0){
            printf("\nNumber is divisible by 5");
        }
        else if ((input % 5)!= 0){
            printf("\nNumber is not divisible by 5");
        }
    }
    else {
        printf("\nEnter a correct Input");
    }
    return 0;
}