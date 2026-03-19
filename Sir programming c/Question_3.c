// Program to reverse a string.
# include<stdio.h>
# include<string.h>

int main(){
    char input[100];
    char *p=input;
    int count = 0;

    printf("Enter a Character:- ");
    scanf("%[^\n]",&input);

    while(*p != '\0'){
        count++;
        p++;
    }
    

    for(int i=count-1; i>=0; i--){
        printf("%c",input[i]);
    }
    return 0;
}