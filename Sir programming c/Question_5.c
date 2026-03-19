// Program to concatenate two strings without using strcat().
# include <stdio.h>
int main(){
    char input1[100], input2[100], input3[300];
    int i=0,j=0;

    printf("Enter a First Character:-\t");
    scanf("%[^\n]",&input1[i]);
    getchar();
    printf("Enter a Second Character:-\t");
    scanf("%[^\n]",&input2[j]);

    char input3[200] = input1[100] + input2[100];
    
    while(input1[i]!='\0'){
        input3[i]=input1[i];
        i++;
    }

    while(input2[j]!='\0'){
        input3[i]=input2[j];
        i++;
        j++;
    }
    printf("Your concatenate string:-%s\t",input3[i]);
    
    printf("%s %s",input1,input2);
}