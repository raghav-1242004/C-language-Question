// 44.	Input a number, check prime or not.
# include <stdio.h>
int main(){
    int input;
    printf("Enter a Value");
    scanf("%d",&input);
    
    
    int i=1;
    
    while (i<=input-1){
        if ((input % i)==0){
            printf("Number is Prime");
            i++;
        break;
        }
        else {
            printf("Number is not prime");
    
    }
    }
    
    return 0;
}