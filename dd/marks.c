#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 70

struct Student
{
    char *name1;
    char *name2;
    char *name3;
    int age;
    float marks;
    int classLevel;
};

// Comparison function for qsort
int compareStudents(const void *a, const void *b)
{
    return ((struct Student *)a)->classLevel - ((struct Student *)b)->classLevel;
}

int main()
{
    struct Student students[MAX_STUDENTS];

    int numberOfStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);


    if (numberOfStudents > MAX_STUDENTS)
    {
        printf("Error: Maximum number of students exceeded.\n");
        return 1;
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        // Allocate memory for names
        students[i].name1 = (char *)malloc(50 * sizeof(char));
        students[i].name2 = (char *)malloc(50 * sizeof(char));
        students[i].name3 = (char *)malloc(50 * sizeof(char));
        printf("Class Level: ");
        scanf("%d", &students[i].classLevel);
        printf("First Name: ");
        scanf("%49s", students[i].name1);
        printf("Middle Name: ");
        scanf("%49s", students[i].name2);
        printf("Sur Name: ");
        scanf("%49s", students[i].name3);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort the students array based on class level
    qsort(students, numberOfStudents, sizeof(struct Student), compareStudents);

    printf("\nStudent Information Sorted by Class Level:\n");
    for (int i = 0; i < numberOfStudents; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s %s %s\n", students[i].name1, students[i].name2, students[i].name3);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("Class Level: %d\n", students[i].classLevel);

        free(students[i].name1);
        free(students[i].name2);
        free(students[i].name3);
    }

    return 0;
}
