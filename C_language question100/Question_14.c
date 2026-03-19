// 14.	Input base and height, print area of triangle.
# include <stdio.h>
int main(){
    float base, height, area;
    printf("Enter The value of Height:- ");
    scanf("%f",&height);
    printf("Enter The value of Base:-   ");
    scanf("%f",&base);
    area = ((height*base)/2);
    printf("Area of Triangle = %f", area);
    return 0;
}