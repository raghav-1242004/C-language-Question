#include <stdio.h>

int main() {
    int n, i, j, flag;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];

    // Taking array input
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPrime numbers are:\n");

    // Checking each number in array
    for(i = 0; i < n; i++) {
        if(arr[i] <= 1)
            continue;

        flag = 1;  // assume prime

        for(j = 2; j * j <= arr[i]; j++) {
            if(arr[i] % j == 0) {
                flag = 0; // not prime
                break;
            }
        }

        if(flag == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}
