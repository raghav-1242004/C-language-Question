# include <stdio.h>
int main(){
    int a,b;
    printf("Enter First Value:-     ");
    scanf("%d",&a);
    printf("Enter second Value:-     ");
    scanf("%d",&b);
    printf("\n\n");
    if (a>b)
        printf("%d  is a Largest From %d",a,b);
    else
        printf("%d  is a Largest From %d",b,a);
    return 0;
}