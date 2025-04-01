#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    do {
        count++;
        num /= 10;
    } while (num != 0);

    return count;
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Number of digits: %d\n", countDigits(num));

    return 0;
}

