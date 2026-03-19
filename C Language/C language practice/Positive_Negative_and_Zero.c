// Check positive ,Negative or Zero
# include <Stdio.h>
int main(){
    int a;
    printf("Enter Value a Value \n");
    scanf("%d",&a);
    if (a>0)
        printf("%d is Positive");
        else if (0>a)
            printf("%d is a Nagative");
    else
        printf("%d is a Zeor");
    return 0;
}