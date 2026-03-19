// 33. Input character, check vowel or consonant
/*# include <stdio.h>
int main (){
    char ch;
    char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    int i, isVowel;
    printf("Enter a cahracter:- ");
    scanf("%c",&ch);

    for (i = 0; i<10; i++){
        if (ch == vowel[i]){
            isVowel = 1;
            break;
        }
    }
    if (isVowel == 1){
        printf("Character is Vowel");
    }
    else{
        printf("Character is not Vowel");
    }
    return 0;
}*/
# include <stdio.h>
int main(){
    char n;
    printf("Enter a Character:- ");
    scanf("%c",&n);
    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U'){
        printf("Characher is Vowel");
    } 
    else {
        printf("Character is  Not Vowel");
    }
    return 0;
}