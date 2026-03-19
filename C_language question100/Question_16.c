// 16.	Input 5 subjects marks, print total marks.
# include <stdio.h>
int main(){
    int a, b, c, d, e;
    printf("Enter a Marks of Subject\n");
    printf("First:-     ");
    scanf("%d",&a);
    printf("Second:-    ");
    scanf("%d",&b);
    printf("Third:-     ");
    scanf("%d",&c);
    printf("Fourth:-    ");
    scanf("%d",&d);
    printf("Fifth:-     ");
    scanf("%d",&e);
    int total = a+b+c+d+e;
    printf("Total Marks of NUmber = %d",total);

}