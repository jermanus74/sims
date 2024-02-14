#include <stdio.h>

int main()
{
    int a, x;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Sorry! Factorial can't be calculated for negative numbers.\n");
    }

    else if (a == 0)
    {
        printf("the factorial of zero is one(1)");
    }
    else
    {
        x = 1;
    }
    printf("The factorial of %d = ", a);

    do
    {
        x = x * a;

        printf("%d", a);

        if (a > 1)
        {
            printf(" * ");
        }
        a--;

    } while (a > 1);
    printf("%d = %d\n", a, x);

    return 0;
}


// int main()
// {
//     int a, x;
//     printf("Enter a number to calculate factorial: ");
//     scanf("%d", &a);

//     if (a < 0)
//     {
//         printf("Sorry! Factorial can't be calculated for negative numbers.\n");
//     }
//     else
//     {
//         x = 1;
//         printf("The factorial of %d = ", a);

//         do
//         {
//             x = x * a;
//             printf("%d", a);
//             if (a != 1)
//             {
//                 printf(" * ");
//             }
//             a--;
//         } while (a > 0);

//         printf(" = %d\n", x);
//     }

//     return 0;
// }


// // Function prototypes
// int calculateSquare(int num);
// int findMaximum(int a, int b);
// int checkEvenOdd(int number);

// int main()
// {
//     int number, num1, num2;

//     // Calculate square
//     printf("Enter a number to calculate its square: ");
//     scanf("%d", &number);
//     int square = calculateSquare(number);
//     printf("Square of %d is: %d\n", number, square);

//     // Find maximum
//     printf("\nEnter two numbers to find the maximum:\n");
//     scanf("%d %d", &num1, &num2);
//     int max = findMaximum(num1, num2);
//     printf("Maximum number between %d and %d is: %d\n", num1, num2, max);

//     // Check even or odd
//     printf("\nEnter a number to check if it's even or odd: ");
//     scanf("%d", &number);
//     int result = checkEvenOdd(number);
//     if (result == 1)
//     {
//         printf("The number %d is even.\n", number);
//     }
//     else
//     {
//         printf("The number %d is odd.\n", number);
//     }

//     return 0;
// }

// // Function to calculate square of a number
// int calculateSquare(int num)
// {
//     return num * num;
// }

// // Function to find maximum of two numbers
// int findMaximum(int a, int b)
// {
//     return (a > b) ? a : b;
// }

// // Function to check even or odd
// int checkEvenOdd(int number)
// {
//     return (number % 2 == 0) ? 1 : 0;
// }
// int main()
// {
//     // int i;
//     // printf("the numbers are: ");
//     // for (i = 1; i < 11; i++)
//     // {
//     //     printf("%d, ", i);
//     // }
//     // return 0;

//     // int num=0;
//     // while ( num<21)
//     // {
//     //   if (num%2==0 && num!=0)
//     //   {
//     //     printf("%d, ", num);
//     //   }
//     //   num++;
//     // }
//     // printf("Are The even numbers  ");
//     // return 0;

//     // int x;
//     // printf("The enter a number");
//     // scanf("%d",&x);

//     // do
//     // {

//     // } while (x>0);

//     int results,i,number = 5;
//     printf("Multiplication Table of %d:\n", number);

//     for ( i = 1; i <= 10; ++i) {
//         results=number*i;
//         printf("%d * %d = %d\n", number, i, results);
//     }

//     return 0;
// }

// int checkEvenOdd(int number) {
//     if (number % 2 == 0) {
//         return 1; // Return 1 for even numbers
//     } else {
//         return 0; // Return 0 for odd numbers
//     }
// }

// int main() {
//     int inputNumber;
//     printf("Enter a number: ");
//     scanf("%d", &inputNumber);

//     int result = checkEvenOdd(inputNumber);

//     if (result == 1) {
//         printf("The number %d is even.\n", inputNumber);
//     } else {
//         printf("The number %d is odd.\n", inputNumber);
//     }

//     return 0;
// }
