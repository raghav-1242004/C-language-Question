//Q-6. Write a C program to input n integers in an array and find out the max and min element.
# include <stdio.h>
int main(){
    int i=0,n;
    printf("Enter a Array length:-");
    scanf("%d",&n);
    int array[n];
    printf("Enter an Element of array");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    int min =array[0];
    int max = array[0];
    // processing part
    for(i=0; i<n; i++){
        if(max <array[i]){
            max  = array[i];
        }
        else if(min > array[i]){
            min = array[i];
        }
    }
    
    // Output part
    printf("your max value:- %d\n", max);
    printf("your min value:- %d", min);
    
}