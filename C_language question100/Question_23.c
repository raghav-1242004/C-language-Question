// 23.	Input three numbers and print largest.
# include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter a Three Number\n");
    scanf("%d \n %d \n %d",&a,&b,&c);
    if ((a>b) && (a>c)){
        printf("%d is Largest",a);
    }
    else if ((b>a)&& (b>c)){
        printf("%d is Largest",b);
    }
    else{
        printf("%d is Largest",c);
    }
    return 0;
}