// Right
// Factorial

# include <stdio.h>
int main(){
    int n;
    printf("Enter a Value:- ");
    scanf("%d",&n);


    int i ,mul = 1;
    for (i=n; i>=1; i--){

        printf("%d X ",i);
        mul = mul*i;
    }
    printf("\n \nFactorial of %d! = %d",n,mul);
    return 0;
 
}