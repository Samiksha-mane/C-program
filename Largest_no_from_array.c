#include <stdio.h>

int findLargest(int arr[], int size) 
{
    int max = arr[0]; 
	int i;
    for ( i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for ( i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("The largest element is: %d\n", findLargest(arr, n));

    return 0;
}

