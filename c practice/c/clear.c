#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int x;
    // int iIndex = -1;
    // int iArray[5];
    // for (x = 0; x < 5; x++)
    //     iArray[x] = (x + 5);
    // do
    // {
    //     printf("\nEnter a valid index (0-4): ");
    //     scanf("%d", &iIndex);
    // } while (iIndex < 0 || iIndex > 4);
    // printf("\nThe value of index %d is %d\n", iIndex, iArray[iIndex]);

    // this program gives ue options to select subject uer studying and gives the output of what you selected
    // int x = 0;
    // printf("chose option from 1-4\n");
    // printf("1\t geography\n");
    // printf("2\t history\n");
    // printf("3\t mathematical\n");
    // printf("4\t drawing\n");
    // printf("enter option ");
    // scanf("%d", &x);
    // char i[4][16] = {"geography", "history", "mathematical", "drawing"};
    // if (x >= 1 && x <= 4)
    // {
    //     printf("your  selected option (%d) is %s. be ready days ain't on your side", x, i[x - 1]);
    // }
    // while (x > 4)
    // {

    //     printf("Ooops! you fucked up.Try again🔁\n");
    //     printf("enter option (1-4) ");
    //     scanf("%d", &x);
    //     printf("your selected option (%d) is %s. be ready don't fuck up next time", x, i[x - 1]);
    // }

    // for (int i = 0; i < 100; i++)
    // {
    //     printf("%d\n", i);
    //     if (i == 50)
    //     {
    //         system("clear");
    //     }
    // }

    // array
    // int x;
    // char cArray[5];
    // char cName[] = "Olivia";
    // printf("\nCharacter array not initialized:\n");
    // for (x = 0; x < 5; x++)
    //     printf("Element %d's contents are %d\n", x, cArray[x]);
    //  printf("\nInitialized character array:\n");
    // for (x = 0; x <6; x++)
    //     printf("%c", cName[x]);
    // float length,width,area;
    // printf("enter length:\n");
    // scanf("%f",&length);
    // printf("enter width\n ");
    // scanf("%f",&width);
    // if (length>0 && width>0)
    // {
    // area=length*width;
    // printf("the area is %f\n", area);
    // }
    // else{
    //     printf("enter a positive number\n");
    // }
    //     int n, number, triangularNumber;
    // printf ("What triangular number do you want? ");
    // scanf ("%i", &number);
    // triangularNumber = 0;
    // for ( n = 1; n <= number; n++ )
    // triangularNumber += n;
    // printf ("Triangular number %i is %i\n", number, triangularNumber);
    // return 0;
    int x = 1;
    do
    {
        printf("enter a number: ");
        scanf("%i", &x);
        if (x < 234)
        {
            for (int x = 1; x < 234; x++)
            {
                printf("the number is %i\n", x);
            
            }
            
           
        }
        else
        {
            printf("enter a number: ");
            scanf("%i", &x);
        }
    } while (x < 250);
}
