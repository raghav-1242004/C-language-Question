// 15. Write a program to print all Armstrong numbers between 1 and 500.
# include<stdio.h>
# include <math.h>
int main(){
    int i,n,a,b,sum=0;
    for(i=1; i<500; i++){
        a = n%10;
        b = pow(a, 2);
        sum = sum+b;
    }
}