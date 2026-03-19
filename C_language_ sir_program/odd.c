wap to find how many even odd and negative
# include<stdio.h>
int main(){
    int arry[10];
    
    for(int i=0; i<10; i++){
        scanf("%d",&arry[i]);

        if(arry[i]%2!=0){
            printf("%d\n",arry[i]);
        }
    }
    return 0;
}