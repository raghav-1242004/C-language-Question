// Write a program to Addition of a matrix using Array
# include <stdio.h>
int main(){
    int n,m;
    printf("Enter your Matrix Row and Column:-");
    scanf("%d %d",&n,&m);


    int arry1[n][m],arry2[n][m];
    int i,j;

    // This Loop for fist Matrix


    printf("Enter First Matrix of all Elements\n\n");
    for(i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("Enter your [%d][%d] position of Element:- ",i,j);
            scanf("%d",&arry1[i][j]);
        }
    }

    printf("Enter Second Matrix of Elements");
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("\nEnter your [%d][%d] position of Element:- ",i,j);
            scanf("%d",&arry2[i][j]);
        }
    }
    //  Your Claculation
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            int arry3=arry1[i][j]+arry2[i][j];
            printf("%d",arry3);
        }
        printf("\n");
    }
    // Print Statement

    for (i=0; i<n; i++){
        printf("[");
        for(j=0; j<m; j++){
            printf("%d ",arry1[i][j]);
        }
        printf("]");
    }
    // // printf("\n\n");
   
    for (i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ",arry2[i][j]);
        }
        printf("|\n");
    }
    
    return 0;

    
}