// Z
// X V 
// T R P 
// N L J H 

// # include<stdio.h>
// int main(){
//     int i,j;
//     char a=90;
//     for (i=1; i<=4; i++){
//         for (j=1; j<=i; j++){
//             printf("%c ",a);
//             a=a-2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// - - - A
// - - G D
// - P M J
// B Y V S
# include<stdio.h>
int main(){
    int i,j ;
    char a = 'A';
    for(i=1; i<=4; i++){
        for (j=1; j<=4-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%c",a);
            a++;
        }
        printf("\n");
        }
    }
}