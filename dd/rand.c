#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int choice;
    do
    {
        int i, x;
        srand(time(NULL));
        i = (rand() % 10) + 1;
        printf("enter a number between 1-10 to guess number: ");
        scanf("%d", &x);
        if (x == i)
        {
            printf("The correct number is %d \n", x);
        }
        else
        {
            printf("The number %d is incorrect\n The correct number is %d\n", x, i);
        }
        printf("enter 1 to continue or 0 to end game!!\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("Thank you for playing");
        }

    } while (choice == 1);

    return 0;
}
