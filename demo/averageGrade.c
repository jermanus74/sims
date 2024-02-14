#include <stdio.h>

int main()
{
    char option;
    do
    {
        int choice, subjectCount, i;
        float total = 0, average, score = 0;
        printf("choose option below\n");
        printf("1. do you want to calculate average?\n");
        printf("2. do you want to get student grade?\n");
        scanf("%d", &choice);

        if (choice < 1 || choice > 2)
        {
            printf("Your choice is invalid\n");
            continue; 
        }

        switch (choice)
        {
        case 1:
            printf("Enter number of subjects\n");
            scanf("%d", &subjectCount);

            printf("Enter the score for each subject\n");

            for (i = 0; i < subjectCount; i++)
            {
                do
                {
                    printf("Score for subject %d: ", i + 1);
                    scanf("%f", &score);
                    if (score <= 100)
                    {
                        total += score;
                        break;
                    }
                    else
                    {
                        printf("Score can't be greater than 100! \n");
                    }
                } while (1);
            }
            average = total / subjectCount;
            printf("Average of %d subjects is %.2f:  \n", subjectCount, average);
            break;
        case 2:
            printf("Enter student's score to get grade: ");
            scanf("%f", &score);

            if (score > 100)
            {
                printf("The score can't be greater than 100! \n");
                break;
            }

          else if (score > 74)
            {
                printf("Grade: A\n");
            }
            else if (score > 64)
            {
                printf("Grade: B\n");
            }
            else if (score > 44)
            {
                printf("Grade: C\n");
            }
            else if (score > 29)
            {
                printf("Grade: D\n");
            }
            else
            {
                printf("Grade: F\n");
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("Do you want to continue (Y/N)?: ");
        scanf(" %c", &option);
    } while (option == 'Y' || option == 'y');
    return 0;
}
