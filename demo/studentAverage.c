#include <stdio.h>

int main()
{
    int z;
    char choice;

    do
    {
        printf("how many students do you want to add marks: ");
        scanf("%d", &z);

        if (z > 1)
        {
            float marks[z]; // Array to store marks of students
            float total = 0.0, average;

            // Loop to get marks for each student
            for (int i = 0; i < z; i++)
            {
                printf("Student %d, enter marks: ", i + 1);
                scanf("%f", &marks[i]);

                total += marks[i]; // Calculate total marks
            }

            // Calculate average
            average = total / z;

            // Display the average
            printf("The average marks of %d students is %.2f\n", z, average);
        }
        else
        {
            printf("The number of students entered should be at least 'two students'\n");
        }

        printf("Do you want to continue (Y/N)?: ");
        scanf(" %c", &choice); // Notice the space before %c to consume the newline character

    } while (choice == 'Y' || choice == 'y');

    return 0;
}
