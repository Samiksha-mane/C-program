#include <stdio.h>
int calculatePower(int base, int exponent) 
{
    int result = 1;
    int i;
    for (i = 1; i <= exponent; i++)
	{
        result *= base;
    }
    return result;
}
int main() 
{
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int result = calculatePower(base, exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);
    return 0;
}
