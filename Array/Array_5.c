// C Program to check whether two matrices can be added or not. 
# include<stdio.h>
int main(){
    int i,j;
    // first matrix
    int n1,m1;
    printf("Enter Row and Column of Matrix first:-\n");
    scanf("%d %d",&n1,&m1);

    //Second Matrix
    int n2,m2;
    printf("Enter Row and Column of matrix second:-\n");
    scanf("%d %d",&n2,&m2);

    //First matrix

    int arry1[n1][m2];
    printf("Enter First matrix Value:-\n");
    for (i=0; i<n1; i++){
        for(j=0; j<m1; j++){
            scanf("%d",&arry1[i][j]);
        }
        printf("\n");
    }
    // Second Matrix

    int arry2[n2][m2];
    printf("Enter Second matrix Value:-\n");
    for(i=0; i<n2; i++){
        for(j=0; j<m2; j++){
            scanf("%d",&arry2[i][j]);
        }
        printf("\n");
    }
    // calculation
    printf("Addition of First and Second matrix:- \n");
    if(n1==n2 && m1==m2){
        int arry3[n1][m1];
         
        for(i=0; i<n1; i++){
            for(j=0; j<m1; j++){
                arry3[i][j]=arry1[i][j]+arry2[i][j];

               
                printf(" |%d |",arry3[i][j]);
                // printf("%d",arry3[i][j]);
            }
            printf("\n");
            
        }
    }
    else{
        printf("Add is not posible of both matrix");
    }

}