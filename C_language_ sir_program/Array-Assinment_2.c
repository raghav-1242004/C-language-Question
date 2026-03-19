# include <stdio.h>
int input;
int checkPrime(){
    if (input%2==0){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    printf("Enter an Number:-\t");
    scanf("%d",&input);
    checkPrime();
    int result = checkPrime();
    if (result == 1){
        printf("%d is Prime",input);
    }
    else{
        printf("%d is Not Prime",input);
    }


}