// add Two number using Function
# include <stdio.h>

int printfadd(int a, int b);

int main(){
    int a,b;
    printf("Enter a two value");
    scanf("%d%d",&a,&b);
    printf("%d",printfadd(a,b));
    return 0;
}
int printfadd(int a, int b){
    return a+b;
}

