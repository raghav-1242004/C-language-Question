// # include<stdio.h>
#include <string.h>
int main(){
    char*s = "Hello";
    char str[10];
    strcpy(str,"Hi");
    strcat(str,s);
    printf("%d",(int)strlen(str));
    return 0;
}
#include <stdio.h>

int main() {
    char *s = "Hello";
    char str[10];
    strcpy(str, "Hi");
    strcat(str, s);
    printf("%d", (int)strlen(str));
    return 0;
}