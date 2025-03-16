#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array

    // Read the array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print the array in reverse order
    printf("Reversed array: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

