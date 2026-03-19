// Program to count vowels and consonants in a string.
# include<stdio.h>
int main(){
    char input1[100];
    int vowelsCount=0,consonantsCount=0;
    int i=0, j=0;

    scanf("%[^\n]",input1);

    while(input1[i] != '\0'){
        if (input1[i]>='A'||input[i]<'Z'||input[i]>='a'||input[i]<='z'){
            if(input[i]=='a'||input[i]=='A'||input[i]=='e'||input[i]=='E'||input[i]=='i'||input[i]==I||input[i]=='o'||input[i]=='O'||input[i]=='u'||input[i]=='U'){
                vowelsCount++;
            }
            else{
                consonantsCount++;
            }
        }
    }
    printf("%d",vowelsCount);
    printf("%d",consonantsCount);

}