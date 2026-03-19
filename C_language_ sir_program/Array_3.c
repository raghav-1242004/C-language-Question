#include<stdio.h>
int main(){
    int n,i;
    printf("Enter aF lenth of Arry:- ");
    scanf("%d",&n);
    int arry[n];
    for (i=0; i<n;i++){
        printf("Enter a %d Position of Arry:- ",i);
        scanf("%d",&arry[i]);
    }
    for (i=0;i<n;i++){
        printf("%d| ",arry[i]);
    }
    printf("\n");
    int shift;
    printf("\n\nHow many time to be shifting of this Array:-");
    scanf("%d",&shift);

    shift = shift%n;

    while(shift--){
        int a = arry[n-1];
        for(i = n-1; i>0; i--){
            arry[i]= arry[i-1];
        }
        arry[0]=a;
    }
     
    for (i=0;i<n;i++){
        printf("%d| ",arry[i]);
    }
    
}