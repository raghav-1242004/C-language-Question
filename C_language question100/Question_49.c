// 49.	Input n, print all factors of n.
# include <stdio.h>
int main(){
    int n;
    printf("\n\n\t\t	Input n, print all factors of n.\n\n");
    printf("Enter a value:- ");
    scanf("%d",&n);

    int i,a=1 ;
    for (i = n; i>=1; i--){
        a =a*i;
        printf(" %d",i);
        
    }
    printf("\nFatorial of %d = %d",n, a);
}