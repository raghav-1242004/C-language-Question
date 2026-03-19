// 17. Write a menu-driven program using switch statement.
# include <stdio.h>
int main(){
    int n,a,b,c;
    float d;
    printf("For Add Click 1\n");
    printf("For Sub Click 2\n");
    printf("For Mul Click 3\n");
    printf("For Div click 4\n");

    printf("Enter Two number:-");
    scanf("%d %d",&a,&b);
    printf("Enter Option:-\t");
    scanf("%d",&n);
    
    switch(n){
        case 1:
        c = a+b;
        printf("Sum = %d",c);
        break;
        case 2:
        c = a - b;
        printf("Subtract = %d",c);
        break;
        case 3:
        c = a*b;
        printf("Multply = %d",c);
        break;
        case 4:
        c = a/b;
        if(a>=b){
            float d = (float) a / b;
            printf("%d",d);
        }
        else{
            printf("Division is Zero or Negative not Allowed");
        }
        break;
        default:
        printf("Please Choose Correct number");
    }
}