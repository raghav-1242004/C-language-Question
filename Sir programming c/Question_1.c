// Program to find the length of a string using strlen().

# include <stdio.h>
# include <string.h>

int main(){
    char input[100];
    printf("Enter a Number:-\t");
    scanf("%[^\n]s",&input);

    printf("your Input is :-%s\n",input);
    int a = strlen(input);
    printf("Your string length %u",a);
}