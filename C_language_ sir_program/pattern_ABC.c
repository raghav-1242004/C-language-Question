// A 
// B C
// D E F
// G H I J

// # include<stdio.h>
// int main(){
//     int i,j;
//     char a = 'A';
//     for (i=1; i<=4; i++){
//         for (j=1; j<=i; j++){
//             printf("%c ",a);
//             a++;
//         }
//         printf("\n");
//     }
// }


# include<stdio.h>
int main(){
    int i,j;
    char a = 'A';
    for (i=1; i<=4; i++){
        for (j=1; j<=i; j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}