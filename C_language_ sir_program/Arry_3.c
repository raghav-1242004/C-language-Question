// # include<stdio.h>
// int main(){
//     int n, i,j;
    
//     printf("Enter a limit of arry");
//     scanf("%d",&n);
//     int arry[n];
//     for(int i = 0; i < n; i++){
//         printf("Enter number %d: ", i+1);
//         scanf("%d", &arry[i]);
        
//     for (i=0; i<n;i++){
//         for(j=i+1;j<n;j++){
//             if (arry[i]>arry[j]){
//                 int a=arry[i];
//                 arry[i]=arry[j];
//                 arry[j]=a;
//             }
//         }
//     }
// printf("Ascending order",arry[i]);
// for (int i=0; i<n; i++){
//     printf("%d",arry[i]);
// }

//     }
// }
#include <stdio.h>

int main() {
    int n;
    printf("Enter a limit of arry:- ");
    scanf("%d",&n);
    int arr[n];

    // Taking 15 inputs
    printf("Enter %d numbers:\n",n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Sorting in ascending order (Bubble Sort)
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Printing sorted array
    printf("\nNumbers in Ascending Order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nNumbers in Decending Order:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    if (n%2==0){
        printf("%d",arr[n/2]);
    }
    else{
        printf("enter");
    }

    return 0;
}
