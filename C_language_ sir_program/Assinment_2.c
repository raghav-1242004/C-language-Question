#include <stdio.h>
// Function to search element
int search(int arr[], int n, int key)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i;   // return index
    }
    return -1;  // not found
}
int main()
{
    int arr[50], n, key, i, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = search(arr, n, key);

    if(result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found");

    return 0;
}
