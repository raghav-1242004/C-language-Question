# include <stdio.h>
int main(){
    int Fahrenheit ,Celsius;
    printf("Enter a value of Fahrenheit:-   ");
    scanf("%d", &Fahrenheit);
    Celsius = ((Fahrenheit - 32)*5/9);
    printf("Celsius = %d", Celsius);
    return 0;

}