// 10.	Input radius of a circle, print area.
# include <stdio.h>
int main(){
    float r, area; // r = radius
    printf("Enter a Value of Radius");
    scanf("%2f",&r);
    // formula of Area of circle
    area = 3.14 *(r * r);

    printf("Area of circle = %2f ",area);
    return 0 ;
}