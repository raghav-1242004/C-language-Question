// Write a program to enter a number and creat a Matrix
# include <stdio.h>
int main(){
    int arry[4][4],i,j;
    printf("Enter a Alements of Array");
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            scanf("%d",&arry[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("%d| ",arry[i][j]);
        }
        printf("\n");
    }
}