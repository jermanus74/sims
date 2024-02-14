#include <stdio.h>
int main()
{
    int a;
    printf("Choose options\n 1.dog\n 2.cow\n 3.donkey\n");
    printf("Enter your option:\t");
    scanf("%d", &a);
    

        if (a==1)
        {
            printf("A dog entered\n");
            printf("ring alarm\n");
        }
        else
        {
            printf("no dog entered\n ");
            printf("dont ring the alarm");
        }
        a--;
    

// int x = 1, y;
// printf("enter a number to calculate factorial: ");
// scanf("%d", &x);
// if (x < 0)
// {
//     printf("you must enter a positive  number");
// }
// else
// {
//     y = 1;
// }
// while (x > 1)
// {
//     y = y * x--;
//     printf("the factorial of %d*%d \n ", y, x);

//     printf("the factorial is %d\n", y);

}
