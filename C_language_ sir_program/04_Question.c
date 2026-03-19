//9. Write a C program using a function that accepts two numbers and swaps them by passing
//  parameters by reference.
# include<stdio.h>
void swap(int *a, int *b){
    int n ;
    n = *a;
    *a = *b;
    *b =  n;

}
int main(){
    int n,m;
    printf("A = ");
    scanf("%d",&n);
    printf("B = ");
    scanf("%d",&m);
    swap(&n, &m);
    printf("A = %d B = %d",n,m);

}