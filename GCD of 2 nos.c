#include <stdio.h>
int main() 
{
    int num1,num2,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    while (num2 != 0) 
	{
        int temp = num2;
        num2 = num1 % num1;
        num1 = temp;
    }
    gcd = num1;
    printf("The GCD of the given numbers is: %d\n", gcd);
    return 0;
}

