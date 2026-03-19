// 39.	Input a 4-digit number, reverse the number.
# include <stdio.h>
int main(){
    int input, rev;
    
    printf("Enter an any Number");
    scanf("%d",&input);

    while (input !=0){
        rev =( input % 10);
        input = (input /10);
        printf("%d",rev);
    }
    return 0;

}