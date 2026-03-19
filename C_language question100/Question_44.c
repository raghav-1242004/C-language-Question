// 44.	Input a number, check prime or not.
# include <stdio.h>
int main(){
    int input;
    printf("Enter a Value");
    scanf("%d",&input);
    
    
    int i=1;
    
    while (i<=input){
        if ((input % i)==0){
            printf("Number is not Prime");
        break;
        }
        else {
            printf("Number is prime");
    
    }
    }
    
    return 0;
}