#include <stdio.h>
void printN(int n) 
{
	int i,j;
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            if (j == 0 || j == n - 1 || i == j) 
			{
                printf("*");
            } 
			else 
			{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() 
{
    int n;
    printf("Enter the size of N: ");
    scanf("%d", &n);
    printN(n);
    return 0;
}

