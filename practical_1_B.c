#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    if(arr == NULL || n == 0)
        return -1;

    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == key) {
            return mid; 
        }
        else if(key > arr[mid]) {
            start = mid + 1; 
        }
        else {
            end = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    int n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("NULL\n");
        return 0;
    }

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if(result == -1)
        printf("Value Not Found!\n");
    else
        printf("Value Found at index %d\n", result);

    return 0;
}
