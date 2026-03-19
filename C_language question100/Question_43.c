// 43.	Input a number, print first 10 multiples.
# include <stdio.h>
int main(){
    int input;
    printf("Enter a number");
    scanf("%d",&input);

    int i, a;
    for (i=1; i<=10; i++){
        a= (input*i);
        printf("%d ",a);

    }
    return 0;    
}