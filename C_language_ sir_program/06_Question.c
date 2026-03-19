//11. Write a C program to search for a number in a given array. Use function and pass the array to the function. the function
//  should return the index of the searched element. If not found it should return  -1.
# include<stdio.h>

// function 
int search(int n, int array[], int s){
    int i;
    for(i=0; i<n; i++){
        if(array[i] == s){
                // printf("%d\n",i);
            return i;
        }
    }
    return -1;
}

//Main Function
int main(){
    int n,i,s, result;
    printf("Enter a length of an array:-\n");
    scanf("%d",&n);

    int array [n];
    printf("Enter your array element\n");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter your Element those your search:- ");
    scanf("%d",&s);

    result = search(n, array, s);
    if (result != -1){
        printf("%d",result);
    }
    else{
        printf("Retrun -1");
    }
    
}