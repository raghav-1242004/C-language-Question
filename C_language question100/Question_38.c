// 38.	Input a 3-digit number, print sum of digits.
# include <stdio.h>
int main(){
    int input, sum =0;

    printf("Enter an any 3 digit Number:-   ");
    scanf("%d",&input);

    while ( input != 0){
        int a= input % 10;
        sum = sum + a;
        input = input / 10;
    }
printf("%d",sum);
    return 0;
}
