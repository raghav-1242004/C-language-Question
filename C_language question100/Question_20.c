// 20.	Input temperature in Fahrenheit and convert to Celsius.
# include <stdio.h>
int main(){
    float Fahrenheit, Celsius;
    printf("Enter a value of Fahrenheit:-   ");
    scanf("%f",&Fahrenheit);
    Celsius = ((Fahrenheit - 32)/1.8);
    printf("%f Fahrenheit = %f Celsius",Fahrenheit, Celsius);
    return 0;

}
