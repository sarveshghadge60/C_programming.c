#include <stdio.h>

struct Student {
    char name[50];
    char school[100];
    float marks;
    char div;
    int roll_no;
};

int main() {
    struct Student s;

    printf("Enter Student Name: ");
    scanf(" %[^\n]s", s.name);

    printf("Enter School Name: ");
    scanf(" %[^\n]s", s.school);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("Enter Division: ");
    scanf(" %c", &s.div);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s.name);
    printf("School: %s\n", s.school);
    printf("Marks: %.2f\n", s.marks);
    printf("Division: %c\n", s.div);
    printf("Roll Number: %d\n", s.roll_no);

    return 0;
}
