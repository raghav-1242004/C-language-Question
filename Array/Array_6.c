// C program to find the transpose of a matrix 
# include <stdio.h>
int main (){
    int i,j,n,m;

    int arry[n][m];
    printf("Enter Row Column\n");
    scanf("%d %d",&n,&m);

    // Input statement from user
    printf("Enter an Elements:- \n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&arry[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf("%d",arry[j][i]);
        }
        printf("\n");
    }
    // return 0;
}
