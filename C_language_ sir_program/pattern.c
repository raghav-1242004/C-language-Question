// Right
// *
// **
// ***
// ****
// *****
// # include <stdio.h>
// int main(){
//     int i, j;
//     for (i=1; i<=5; i++ ){
//         for (j = 1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// # include <stdio.h>
// int main(){
//     int i, j;
//     int a=1;
//     for (i=1; i<=4; i++ ){
//         for (j = 1; j<=i; j++){
//             printf("%d",a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 1
// 2 1
// 3 2 1
// 4 3 2 1
# include <stdio.h>
int main(){
    int i, j;
    for (i=1; i<=4; i++ ){
        for (j = i; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}