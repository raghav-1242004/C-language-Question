// wap to enter input find how many even odd and negative
#include <stdio.h>

int main() {
    int n, arry[];
    int even = 0, odd = 0, negative = 0;

    // printf("Enter how many numbers you want: ");
    // scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arry[i]);

        if(num < 0){
            negative++;
        }

        if(num % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }
)

    printf("\nTotal Even Numbers = %d", even);
    printf("\nTotal Odd Numbers = %d", odd);
    printf("\nTotal Negative Numbers = %d", negative);

    return 0;
}

 #include <stdio.h>

int main() {
    int n;

    printf("Enter how many numbers you want: ");
    scanf("%d", &n);

    int arr[n];
    int even = 0, odd = 0, negative = 0;

    // storing values in array
    for(int i = 0; i < n; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // counting even, odd & negative
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            negative++;
        }

        if(arr[i] % 2 == 0){
            even++;
        } else {
            odd++;
        }
    }

    printf("\nTotal Even Numbers = %d", even);
    printf("\nTotal Odd Numbers = %d", odd);
    printf("\nTotal Negative Numbers = %d", negative);

    return 0;
}
