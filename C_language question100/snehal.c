// # include<stdio.h>
// int main(){
//     int i, count=0,n;
//     printf("Enter a value");
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count==2){
//         printf("number is Prime");
//     }
//     else{
//         printf("Number is not Prime");
//     }
//     return 0;
// }
# include <stdio.h>
int main(){
    int i,j,n=5,c=1;
    for (i =1;i<=n;i++){
        for (j=1;j<=i;j++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}