// 24.	Input three numbers and print smallest.
# include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter a Three number ");
    scanf("%d \n %d \n %d",&a,&b,&c);
    if (a<b && a<c){
        printf("%d is a smallest ",a);
    }
    else if(b<a && b<c){
        printf("%d is a Smallest",b);
    }
    else {
        printf("%d is smallest",c);
    }
    return 0;
}