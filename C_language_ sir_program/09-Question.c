// WAP to program to create an 10 input in array 10 value
# include<stdio.h>
int sum(int array[]){
        int i, sum = 0;
        for(i=0; i<10; i++){
             sum = sum +array[i];
        }
        return sum;
    }
int main(){
    int i;
    int array[10]
    printf("Enter a value of an array:-\t");
    for(i=0; i<10; i++){
        scanf("%d",&array[i]);
    }
    int ruesult = sum(array);
    printf("sum of array Element:- %d ", result);
    return 0;

}