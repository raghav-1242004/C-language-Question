// 26.	Input two numbers and print minimum using ternary operator.
# include <stdio.h>
int main(){
    int a,b;
    printf("Enter a Two Nummber:-  \n");
    scanf("%d \n %d",&a,&b);
    if ((a<b)? printf("%d is Minimum",a) : printf("%d is minimum",b)); 
}