//  34. Input character, check digit or alphabet.
# include<stdio.h>
int main(){
    char ch;
    printf("Enter a Character ");
    scanf("%c",&ch);
    if (ch>='0' && ch<='9'){
        printf("character is Digit");
    }
    else if ((ch>='A'&& ch<='Z') || (ch>='a' && ch<='z')){
        printf("Character is Alphabet");
    }
    else {
        printf("Character is Special Character");
    }
    return 0;
}