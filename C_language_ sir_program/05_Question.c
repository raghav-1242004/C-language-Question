// 10. Write a recursive function to calculate factorial of a number.
# include<stdio.h>
int facto(int n ){
    if(n == 0 || n == 1){
        return 1;
    }
    int factNm1 = facto(n-1);
    int fact = factNm1 * n;
    return fact;
}
int main(){
    int n;
    printf("Enter a number:-");
    scanf("%d",&n);
    printf("your fact :- %d", facto(n));

}