# include <stdio.h>
int main(){
    // int arry[][];
    // int arry[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int arry[4][4];
    printf("Enter Element:- ");
    int i,j;
    for(i=0;i<4;i++){
        for (j=0; j<4; j++){
            scanf("%d",&arry[i][j]);
        }
    }
    int k;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            for(k=3;k>=0;k--){
                printf("%d ",arry[i][j]);
            }
        }
        printf("\n");
    }
}