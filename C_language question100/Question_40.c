// 40.	Input a number, check palindrome.
# include <stdio.h>
int main(){
    int  a, input , rev;
    printf("Enter any character ya Number");
    scanf("%d",&input);

    a == input;

    while (input !=0){
        rev = (input % 10);
        input = (input / 10);
        // printf("%d",rev);
    }
    if (rev == a){
        printf("yes");
    }
    else {
        printf("No");
    }

}