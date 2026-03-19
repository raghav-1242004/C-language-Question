// Write a program in C to convert a decimal number to a binary number using the function.
# include <stdio.h>

void decimal(int a);

int main(){
    int a;
    printf("Enter a Number :- ");
    scanf("%d",&a);

    decimal(a);

    return 0;
}

void decimal(int a){
    int n,f=0,b=1;
    while(a!=0){
        n=a%2;
        f=f+n*b;
        b=b*10;
        printf("%d",n);

    }
    // printf("%d",n);

}