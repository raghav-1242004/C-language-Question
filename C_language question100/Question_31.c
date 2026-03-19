// 31.	Input year, check leap year or not.
# include <stdio.h>
int main(){
    int year, check;
    printf("Enter any one Year:-    ");
    scanf("%d",&year);
    // if ((year % 400 == 0) && (year % 4 == 0)){
    check = ((year % 400 ==0) || (year % 4 == 0));
    if (check = 1){             // 1 if check condition is true then run code else not run
        printf("Year is Leap Year");
    }
    else {
        printf("Year is not Leap Year");
    }
    return 0;
}