#include <stdio.h>
int main() 
{
    int length, width, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area of the rectangle: %d\n", area);
    printf("Perimeter of the rectangle: %d\n", perimeter);
    return 0;
}
