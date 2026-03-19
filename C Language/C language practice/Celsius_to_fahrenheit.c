# include <stdio.h>
int main(){
    int Fahreneit, Celsius;
    printf("Enter a value of Celsius:-  ");
    scanf("%f",&Celsius);
    Fahreneit = (Celsius*1.8)+32;
    printf("Fahreneit = %f",Fahreneit);
    return 0;
}
