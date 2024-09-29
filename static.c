#include <stdio.h>

int main() {
    int a[10], i, n;
    
    printf("Enter the total number of elements in the array: ");
    scanf("%d", &n);

    if (n > 10) {
        printf("You can only enter up to 10 elements.\n");
        return 1; 
    }

    printf("\nEnter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nThe elements of the array are:\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;  
}
