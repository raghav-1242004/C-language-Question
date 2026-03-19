// 45.	Input n, print first n natural numbers.
# include <stdio.h>
int main(){
    int n;
    printf("\n\nENter a Value Whare You find Natural Number\n\n");
    printf("Enter a Value :-    ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        printf("%d\n",i);
    }
    return 0;
}