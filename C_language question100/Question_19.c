// 19.	Input temperature in Celsius and convert to Fahrenheit.
# include <stdio.h>
int main(){
    float temperature , fahrenheit;
    printf("Enter a value of Celsius in temperture");
    scanf("%f",&temperature);
    fahrenheit = (1.8* temperature)+32;
    printf("Fahrenheit = %f",temperature);
    return 0;

}