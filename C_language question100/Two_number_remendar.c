// 6.	Input two numbers and print remainder.
# include <stdio.h>
int main(){
    int a,b,reme;
    printf("Enter a value of a:-    ");
    scanf("%d",&a);
    printf("Enter a value of b:-    ");
    scanf("%d",&b);
    reme = a % b;
    printf("Remendar = %d",reme);
    return 0;
}