#include<stdio.h>
int main()
{
    int no, fact = 1, i;
    printf("\nEnter the number: ");
    scanf("%d", &no);

    if (no < 0) 
	{
        printf("\nFactorial of a negative number is not defined.\n");
    } 
	else 
	{
        for (i = 1; i <= no; i++) 
		{
            fact *= i; 
        }
        printf("\nFactorial = %d\n", fact);
    }

    return 0;
}

