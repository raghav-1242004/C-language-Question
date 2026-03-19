# include <stdio.h>
int main(){
    float price[3];
    printf("Enter a Value");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);

    float value;
    value = price[0]+price[1]+price[2];
    // value = value + (0.18*value);
    printf("%f",value);
    return 0;
}