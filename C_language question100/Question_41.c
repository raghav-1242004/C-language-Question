// 41.	Input a number, print factorial.
# include <stdio.h>
int main(){
    int input;
    printf("Enter a Value:- ");
    scanf("%d",&input);
    int i = 1, a = 1;
    for (i==1; input>=i; i++){
        a=(a*i);
    }
    printf("%d\n",a);
    return 0;
}