//  32. Input age, check eligible for voting (>=18).
# include <stdio.h>
int main(){
    int age ;
    printf("Enter Your Age:-    ");
    scanf("%d",&age);
    if (age >= 18){
        printf("You are Eligible for Voting");
    }
    else{
        printf("you are not Elegible for Voting");
    }
    return 0;
}