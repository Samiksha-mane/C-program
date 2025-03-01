#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(char str[], int *vowelCount, int *consonantCount) 
{
    *vowelCount = 0;
    *consonantCount = 0;
    int i;
    for ( i = 0; str[i] != '\0'; i++) 
	{
        char ch = tolower(str[i]); // Convert to lowercase for easy comparison

        if ((ch >= 'a' && ch <= 'z')) 
		{ // Check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
			{
                (*vowelCount)++;
            } else 
			{
                (*consonantCount)++;
            }
        }
    }
}

int main() 
{
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    countVowelsConsonants(str, &vowels, &consonants);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}

