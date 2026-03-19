# include<stdio.h>
int main(){
    int arry[15],i,j;
    for(int i = 0; i < 15; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arry[i]);
        
    for (i=0; i<15;i++){
        for(j=i+1;j<15;j++){
            if (arry[i]>arry[j]){
                int a=arry[i];
                arry[i]=arry[j];
                arry[j]=a;
            }
        }
    }
    printf("Ascending order");
    for (int i=0; i<15; i++){
        printf("%d",arry[i]);
    }

    }
}