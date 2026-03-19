// 25.	Input two numbers and print maximum using ternary operator.
# include <stdio.h>
int main(){
    int a,b;
    printf("Enter any Two Value:-   \n");
    scanf("%d \n %d",&a,&b);
    if ((a>b) ? printf("%d is a Maximum",a)  : printf("%d is a Maximum",b));
    return 0; 
}