#include <stdio.h>

int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }

    int max = findMax(arr, size - 1);
    return (max > arr[size - 1]) ? max : arr[size - 1];
}

int main() {
    int arr[] = {10, 23, 45, 7, 89, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);
    printf("The largest element in the array is: %d\n", max);

    return 0;
}
