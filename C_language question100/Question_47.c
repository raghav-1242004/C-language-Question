// 47.	Input n, print sum of even numbers till n.
# include <stdio.h>
int main(){
    int n;
    printf("\n\n\t\t	Input n, print sum of even numbers till n.\n\n");
    printf("Enter a Value");
    scanf("%d",&n);


    int i, sum = 0;
    for(i = 0; i<=n; i=i+2){
    sum = sum + i;
    }
    printf("%d",sum);
}