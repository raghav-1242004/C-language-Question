// Check palindrome number
# include <stdio.h>
int main(){
    char input[100];
    printf("Ente a Value:-      \n");
    scanf("%s",input);
    
    char d = input;
    char rev = 0;
    (d = input);
    while(d !=0){
          rev = (rev*10 + d % 10);
          d = d / 10;

    }
    // printf("%d",rev);
    if (rev == input){
        printf("Number is Palidrome");
    }
    else {
        printf("Number is not palidrome");
    }
}
