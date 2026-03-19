// 12.	Input side of a square, print area.
# include <stdio.h>
int main(){
    int side, area;
    printf("Enter a value side of square ");
    scanf("%d",&side);
    area = (side*side);
    printf("Area of Square = %d",area);
    return 0;
}