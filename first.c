#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    arr = (int*)malloc(n * sizeof(int)); // Allocating memory for 5 integers

    // Initializing the array
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Printing the array elements
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // Freeing the allocated memory
    return 0;
}
