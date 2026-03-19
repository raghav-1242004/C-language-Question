// 50.	Input n, print reverse from n to 1.
# include <stdio.h>
int main(){
    int n;
    printf("\n\n\t\tInput n, print reverse from n to 1.\n\n");
    printf("Enter a value:-     ");
    scanf("%d",&n);

    int i;
    for(i = n; i>=1; i--){
        printf("%d\n",i);
    }
    return 0;
}