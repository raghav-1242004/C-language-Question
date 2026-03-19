// 17.	Input 5 subjects marks, print percentage.
# include <stdio.h>
int main(){
    float a, b, c, d, e, percentage, total;
    printf("Enter Five subject marks :- ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    total = (a+b+c+d+e);
    printf("Total number = %2f\n", total);
    percentage = (total/5);
    printf("percentage of your number = %2f",percentage );
    return 0;


}