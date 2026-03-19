# include <stdio.h>
# include <string.h>
int sum(int sub1, int sub2, int sub3){
    int sum = sub1 + sub2 + sub3;
    return sum;
}
 float percentage(int sub1, int sub2, int sub3){
    float per;
    int total;
    total = sum(sub1, sub2, sub3);
    per= (float)total/3;
    return per;
}
// check prime or Not Question:- 1
void prime(int sub1, int sub2, int sub3){
    if(sub1%2 ==0 ){
        printf("%d Number is Prime of Subject 1\n",sub1);
    }
    else {
        printf("%d Number is Not Prime of Subject 1\n",sub1);
    }
    if(sub2%2 == 0){
        printf("%d Number is Prime of Subject 2\n",sub2);
    }
    else{
        printf("%d Number is Not Prime of Subject 2\n",sub2);
    }
    if(sub3%2 == 0){
        printf("%d Number is Prime of Subject 3\n",sub3);
    }
    else {
        printf("%d Number is Not Prime of Subject 3\n",sub3);
    }
}
void sumOfDigit(int sub1, int sub2, int sub3){
    int array[]=;
    for(i)
    // printf("Your number is:= %d %d %d");
    // char result[50];
    // sprintf(result, "%d %d %d",sub1, sub2, sub3);
    // printf("%s\n",result);
    // int len = strlen(result);
    // printf("%d\n",len);
    
}

int main(){
    int sub1, sub2, sub3;
    printf("Enter Three subject Marks:- \t");
    scanf("%d %d %d",&sub1,&sub2,&sub3);

    // int add = sum(sub1, sub2, sub3);
    // printf("%d\n",add);
    // float ratio = percentage(sub1, sub2, sub3);
    // printf("%.2f",ratio);
    // prime(sub1, sub2, sub3);
    sumOfDigit(sub1, sub2, sub3);

    return 0;

}

