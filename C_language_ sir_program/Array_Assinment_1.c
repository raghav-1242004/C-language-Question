# include<stdio.h>
void fahrenheit(){
    float celsius, fahrenheit;
    printf("Enter a value of Temperature in Celsius:-\t");
    scanf("%f",&celsius);
    // Formula
    fahrenheit = (celsius*1.8)+32;
    // output
    printf("Your Fahrenheit in Temperature:- %.2f\t",fahrenheit);
}
int main(){
    fahrenheit();
    
}