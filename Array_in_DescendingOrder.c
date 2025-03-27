#include <stdio.h>

// Function to sort an array in descending order
void sortDescending(int arr[], int n) {
    int temp;
    int i,j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // Swap if the current element is smaller
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
	int i;
    // Taking input for array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declaring the array

    // Taking input for array elements
    printf("Enter %d elements: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array in descending order
    sortDescending(arr, n);

    // Displaying the sorted array
    printf("Array in descending order: ");
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

