# include <stdio.h>
int main(){
    int a,b,c;      // a = Firsts value,    b= Second Value
    printf("Enter Your First Value:-    ");
    scanf("%d",&a);
    printf("Enter YOur Second Value:-   ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;

    printf("First Value:- %d  ",a);
    printf("Second Value:- %d ",b);
    return 0;
}