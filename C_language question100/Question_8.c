//8.	Input a number and print its cube.
# include <stdio.h>
int main(){
    int a, b;
    printf("Enter a Value those you find Cube:-     ");
    scanf("%d",&a);
    b = a;
    a = a*a*a;
    printf("Cube of %d = %d ",b,a );
    return 0;
}