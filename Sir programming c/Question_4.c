// Program to copy one string to another without using strcpy().

# include<stdio.h>
int main(){
    char input1[100],input2[100];
    int i=0;
    printf("Enter a Character:-\t");
    scanf("%[^\n]",&input1);

    while(input1[i] !='\0'){
        input2[i]=input1[i];
        
        i++;
    }
    input2[i]='\0';
    printf("%s",input2);
    
}