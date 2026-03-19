# include <stdio.h>
int input(){
    int sub1, sub2, sub3;
    printf("Enter Three subject Marks:- \t");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    return 0;
}
void sum(){
    int sub1, sub2, sub3;
    int sum = sub1+sub2+sub3;
    // printf("Sum of (%d+%d+%d):- %d\n",sub1,sub2,sub3,sum);
    // printf("%d\n",sum);   
    return sum;
}
void percentage(){
    float percentage;
    int sub1, sub2, sub3;
    int total;
    // int total = sum(sub1, sub2, sub3);
    printf("%d\n",total);
    // precentage = total / 3
}

int main(){
    int total= sum();
    
    input();
    sum();
    percentage();

}