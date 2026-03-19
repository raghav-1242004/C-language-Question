// Right
// Calculate Number
# include <stdio.h>
int main(){
    char symbol;
    int a , b, ans;
    
    printf("Enter a expraction like (a+b):-    ");
    scanf("%d %c %d",&a,&symbol,&b);
    
    if (symbol == '+'){
        ans = a+b ;
        printf("%d %c %d = %d",a, symbol, b, ans);
    }
    else if (symbol == '-'){
        ans = a-b ;
        printf("%d %c %d = %d",a, symbol, b, ans);
    }
    else if (symbol == '*'){
        ans = a*b ;
        printf("%d %c %d = %d",a, symbol, b, ans);
    }
    else if (symbol == '/'){
        ans = a/b ;
        printf("%d %c %d = %d",a, symbol, b, ans);
    }
    else if (symbol == '%'){
        ans = a%b ;
        printf("%d %c %d = %d",a, symbol, b, ans);
    }
    else if (symbol == '^'){
        ans = a*a ;
        printf("%d %c %d = %d",a, symbol, b, ans);
    }
    else {
        printf("Enter correct symbol");
    }
        return 0;
    }