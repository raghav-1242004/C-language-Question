// 22. Write a program to input elements in a 3×3 matrix and print row-wise sum.
# include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3], arr3[3][3];
    int i,j;
    printf("Matrix");
    for(i=0; i<3;i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Matrix");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("1st Matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
    printf("2nd Matrix\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            arr3[i][j]= arr1[i][j]+arr2[i][j];
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }
    
}