#include <stdio.h>
#include <string.h>

void mergeStrings(char str1[], char str2[], char result[]) {
    int i = 0, j = 0, k = 0;
    
    while (str1[i] != '\0') {
        result[k++] = str1[i++];
    }
    while (str2[j] != '\0') {
        result[k++] = str2[j++];
    }
    result[k] = '\0'; // Null terminate the merged string
}

int main() {
    char str1[100], str2[100], merged[200];
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
    
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
    
    mergeStrings(str1, str2, merged);
    
    printf("Merged string: %s\n", merged);
    
    return 0;
}

