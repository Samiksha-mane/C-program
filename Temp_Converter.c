#include <stdio.h>

// Function to convert Celsius to Fahrenheit and Kelvin
void celsiusToOther(float c) 
{
    printf("Fahrenheit: %.2f°F\n", (c * 9 / 5) + 32);
    printf("Kelvin: %.2fK\n", c + 273.15);
}

// Function to convert Fahrenheit to Celsius and Kelvin
void fahrenheitToOther(float f) 
{
    printf("Celsius: %.2f°C\n", (f - 32) * 5 / 9);
    printf("Kelvin: %.2fK\n", ((f - 32) * 5 / 9) + 273.15);
}

// Function to convert Kelvin to Celsius and Fahrenheit
void kelvinToOther(float k) 
{
    printf("Celsius: %.2f°C\n", k - 273.15);
    printf("Fahrenheit: %.2f°F\n", ((k - 273.15) * 9 / 5) + 32);
}

int main() 
{
    int choice;
    float temp;

    printf("Temperature Converter\n");
    printf("1. Convert Celsius\n");
    printf("2. Convert Fahrenheit\n");
    printf("3. Convert Kelvin\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature: ");
    scanf("%f", &temp);

    switch (choice) {
        case 1: celsiusToOther(temp); break;
        case 2: fahrenheitToOther(temp); break;
        case 3: kelvinToOther(temp); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}

