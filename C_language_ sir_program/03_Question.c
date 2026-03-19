// 8. Write a program to read a word and check wheather it is palindrome or not.
# include<stdio.h>
# include <string.h>
int main(){
    char array[100];
    printf("Enter a String:-");
    scanf("%[^\n]",array);

    int j = strlen(array)-1;
    int i=0, count=0;

    while(i<j){
        if(array[i] != array[j]){
            count=1;
            break;
        }
        i++;
        j--;
    }
    if(count == 0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
}
