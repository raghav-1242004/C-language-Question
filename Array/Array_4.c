// 1. C Program to check if two given matrices are identical  
#include<stdio.h>
int main(){
    int n, m;
    printf("Enter Row and Column:-\t");
    scanf("%d %d",&n,&m);

    // first matrix

    printf("Enter Element of Matrix 1:- \n");
    int arry1[n][m],arry2[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arry1[i][j]);
        }
        printf("\n");
    }
    // second Matrix

    printf("Enter Element of Matrix 2:- \n");
    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d",&arry2[i][j]);
        }
        printf("\n");
    }
    int i,j;
    int identical=1;
    for (i=0;i<n;i++){
        for (j=0; j<m; j++){
            if (arry1[i][j]!=arry2[i][j]){
                identical = 0;
                break;
            }
        }
    }
    if(identical == 1){
        printf("Matrix is Identical");
    }
    else{
        printf("matrix is not Identical");
    }
    return 0;
}
