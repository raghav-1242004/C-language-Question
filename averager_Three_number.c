# include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter a value \n");
    printf("First:- ");
    scanf("%d",&a);
    printf("Second:-    ");
    scanf("%d",&b);
    printf("Third:- ");
    scanf("%d",&c);
    float ave;
    ave = (a+b+c)/3;
    printf("Average of %d %d and %d = %d",a,b,c,ave);

    return 0;
}
