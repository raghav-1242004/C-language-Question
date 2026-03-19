// 16. Write a program using while loop to reverse a number.
# include<stdio.h>
int main(){
    int n, rev=0,a,b;
    printf("Enter a Number:- ");
    scanf("%d",&n);
    
    while(n>0){
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    printf("%d",rev);

}