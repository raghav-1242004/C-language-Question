// Right
// create a menu-diven c program to perform basic arithmetic operations(+-*/%)
# include <stdio.h>
int main(){
    char input;
    printf("Enter a value");
    scanf("%c",&input);
    switch(input){
        case '+':
          printf("+");
          break;
        case '-':
          printf("-");
          break;
        case '*':
          printf("*");
          break;
        case '/':
          printf("%%");
          break;

        default:
          printf("incorrect");

      }

}
