// 3. Print Fibonacci series up to n terms using for loop
# include <stdio.h>
int main(){
    int input;
    printf("Enter a Value");
    scanf("%d",&input);

    int i,a;
    for (i=0; i<=input; i++){
        a= a +i;
    }
    printf("%d",a);
}
