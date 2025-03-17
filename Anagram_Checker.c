#include <stdio.h>
#include <string.h>

#define MAX 100

// Function to sort a string
void sortString(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);

    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

// Function to check if two strings are anagrams
int areAnagrams(char *str1, char *str2) {
    int i;
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Convert uppercase letters to lowercase manually
    for (i = 0; i < len1; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + 32;
        }
    }

    for (i = 0; i < len2; i++) {
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            str2[i] = str2[i] + 32;
        }
    }

    // Sort the strings
    sortString(str1);
    sortString(str2);

    // Compare sorted strings
    if (strcmp(str1, str2) == 0) {
        return 1;  // Anagrams
    } else {
        return 0;  // Not Anagrams
    }
}

int main() {
    char str1[MAX], str2[MAX];

    // Read strings from the user
    printf("Enter the first string: ");
    fgets(str1, MAX, stdin);
    str1[strcspn(str1, "\n")] = 0;  // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, MAX, stdin);
    str2[strcspn(str2, "\n")] = 0;  // Remove newline character

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("\nThe strings are anagrams of each other.\n");
    } else {
        printf("\nThe strings are not anagrams of each other.\n");
    }

    return 0;
}

