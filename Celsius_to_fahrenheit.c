# include <stdio.h>
int main(){
    int Fahreneit, Celsius;
    printf("Enter a value of Celsius:-  ");
    scanf("%d",&Celsius);
    Fahreneit = (Celsius*1.8)+32;
    printf("Fahreneit = %d",Fahreneit);
    return 0;
}
