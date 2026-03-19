# include <stdio.h>
int main(){
    // Menu option
    printf("Choose Number\n");
    printf("Press 1 For Addition\n");
    printf("Press 2 For Subtract\n");
    printf("Press 3 For Multiply\n");
    printf("Press 4 For Divide\n");
    printf("Press 5 For Precentage\n");

    int n; // where n is Choose number
    int a,b,c;
    printf("Enter a Choose value:-\t"); // output statement
    scanf("%d",&n); // input statement

    switch(n){  // Switch case
        
        case 1: 
        printf("Enter a first and second value:-\t");
        scanf("%d %d",&a,&b );
        c= a+b;
        printf("%d + %d = %d",a,b,c);
        break;    // if program is complete then statement break

        case 2:
        printf("Enter a first and second value:-\t");
        scanf("%d %d",&a,&b );
        c= a-b;
        printf("%d - %d = %d",a,b,c);
        break;      // if program is complete then statement break

        case 3:
        printf("Enter a first and second value:-\t");
        scanf("%d %d",&a,&b );
        c= a*b;
        printf("%d * %d = %d",a,b,c);
        break;      // if program is complete then statement break
        
        case 4:
        printf("Enter a first and second value:-\t");
        scanf("%d %d",&a,&b );
        c= a/b;
        printf("%d / %d = %d",a,b,c);
        break;          // if program is complete then statement break

        case 5:
        printf("Enter a value of Ruees:-\t");
        scanf("%d",&a );
        printf("How many percent on your Rupees:-\t");
        scanf("%d",&b);     // if program is complete then statement break
        
        float c = (float) (a*b)/100; //  type conversion
        
        printf("%d Percentage %d = %.2f",a,b,c);

        break;          // if program is complete then statement break

        default: printf("Choos Valid Number");      // if press not 1 to 5 then run this like Else statement
    }
    return 0;   
}