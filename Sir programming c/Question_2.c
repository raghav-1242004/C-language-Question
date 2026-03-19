// Program to find the length of a string without using strlen().
# include <stdio.h>
// # include <string.h>

int main(){
    char input[100];
    int count=0,n=0;
    char *p=input;

    printf("Enter a any Chracter:-\t");
    scanf("%[^\n]s",input);

    while(*p != '\0'){
        count++;
        p++;
        if(*p==32){
            n++;
        }
    }
    int a = count - n;
    printf("Total Character with Space:- %d\n",count);
    printf("Total character Without space:- %d",a);
    // printf("%s",input);
}