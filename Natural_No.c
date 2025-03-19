#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print all natural numbers from 1 to n
    int i;
    for ( i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}

