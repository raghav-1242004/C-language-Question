// 11.	Input radius of a circle, print circumference.
# include <stdio.h>
int main(){
    float a ; //a= radius
    printf("Enter a value of Radius ");
    scanf("%f",&a);
    float c = (2*3.14*a); // c = circumference
    printf("circumference of circle = %f", c);
    return 0;
}