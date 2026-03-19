// 19. Write a C program to find the minimum and maximum elements in an array of size 10.
# include<stdio.h>
int main(){
    int n=5,i,min;
    int array[n];
    printf("Enter a value of array:- ");
    for (i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    min = array[0];
    for(i=0; i<n; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    printf("Minimum:- %d",min);
}