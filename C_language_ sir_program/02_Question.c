// Q_7. Implement matrix additon and matrix multiplication using 2D array.
# include<stdio.h>
int main(){

    int i,j,k,n,m;
    printf("Enter Row and Column value:-");
    scanf("%d %d",&n,&m);//n=row and m=column

    int array1[n][m], array2[n][m];
    int array3[n][m], array4[n][m];

    printf("Enter A 1st matrix Elemnet of value:-");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter A 2nd matrix Elemnet of value:-");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &array2[i][j]);
        }
    }
    printf("Your first matrix\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d", array1[i][j]);
        }
        printf("\n");
    }
    printf("Your Second matrix\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d", array2[i][j]);
        }
        printf("\n");
    }
    printf("\nAddition of Matrix:\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            array3[i][j] = array1[i][j] + array2[i][j];
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }
    // multipilication of matrix
    if(n==m){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                array4[i][j] = 0;
                for(k=0;k<m;k++){
                    array4[i][j] =array4[i][j]+ array1[i][k] * array2[k][j];
                }   
            }
        }
        printf("\nMultiplication of Matrix:\n");
        for(i=0;i<n;i++){
            for(j=0;j<m;j++)
                printf("%d ",array4[i][j]);
            printf("\n");
        }
    }
    else{
    printf("\n\tMatrix Multipilication is not Possible");
    }
}