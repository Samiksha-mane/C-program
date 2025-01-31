#include <stdio.h>
void printZ(int n) 
{
	int i,j;
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            // Print '*' in first row, last row, or diagonal from top-right to bottom-left
            if (i == 0 || i == n - 1 || j == n - i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

int main() 
{
    int size;
    printf("Enter the size of Z: ");
    scanf("%d", &size);
    if (size < 3) 
	{
        printf("Size should be at least 3 to form a proper 'Z' pattern.\n");
        return 1;
    }
    printZ(size);
    return 0;
}

