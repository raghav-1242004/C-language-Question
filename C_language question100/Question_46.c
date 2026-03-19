// 46.	Input n, print sum of first n natural numbers.
# include <stdio.h>
int main(){
    int n;
    printf("\n\n\t\tInput n, print sum of first n natural numbers.\n\n");
    printf("Enter a Value:-     ");
    scanf("%d",&n);


    int i,a;
    for (i=1; i<=n; i++){
        a = a+i;
    }
    printf("%d",a);

    return 0;
}