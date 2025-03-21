#include <stdio.h>
void removeDuplicates(int arr[], int *size) 
{
    int temp[*size];  // Temporary array to store unique elements
    int newSize = 0;  // New size of the array after removing duplicates

    // Traverse through the original array
    int i,j;
    for ( i = 0; i < *size; i++) 
	{
        int isDuplicate = 0;
        
        // Check if the current element already exists in the temporary array
        for ( j = 0; j < newSize; j++) 
		{
            if (arr[i] == temp[j]) 
			{
                isDuplicate = 1;
                break;
            }
        }
        
        // If not a duplicate, add it to the temporary array
        if (!isDuplicate) 
		{
            temp[newSize++] = arr[i];
        }
    }

    // Copy unique elements back to the original array
    for (i = 0; i < newSize; i++) 
	{
        arr[i] = temp[i];
    }

    // Update the size of the array
    *size = newSize;
}

int main() 
{
	int i;
    int arr[] = {1, 2, 3, 2, 4, 5, 3, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for ( i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    removeDuplicates(arr, &size);

    printf("Array after removing duplicates: ");
    for (i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

