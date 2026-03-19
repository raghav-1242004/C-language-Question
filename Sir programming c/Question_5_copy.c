// Program to concatenate two strings without using strcat().
# include <stdio.h>
int main(){
    char input1[100], input2[100];

    printf("Enter a First Character:-\t");
    scanf("%[^\n]",&input1);
    getchar();
    printf("Enter a Second Character:-\t");
    scanf("%[^\n]",&input2);

    printf("%s %s",input1,input2);
}