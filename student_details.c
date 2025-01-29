#include <stdio.h>
struct Student 
{
    char name[50];
    int age;
    float marks;
};
void displayStudent(struct Student s) 
{
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}
int main() 
{
    struct Student student1;
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter age: ");
    scanf("%d", &student1.age);
    printf("Enter marks: ");
    scanf("%f", &student1.marks);
    printf("\nStudent Details:\n");
    displayStudent(student1);
    
    return 0;
}

