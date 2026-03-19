// 13.	Input side of a square, print perimeter.
# include <stdio.h>
int main(){
    int side,perimeter;
    printf("Enter a Side of Square:-");
    scanf("%d",&side);
    perimeter = 4*side;
    printf("perimeter of square = %d",perimeter);
    return 0;
}